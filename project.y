%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
	int current_data_type;
	int expn_type = -1;
	int temp;
	int idx = 0;
	int table_idx = 0;
	struct symbol_table{char var_name[30]; int type;} sym[20];
	extern int lookup_in_table(char var[30]);
	extern void insert_to_table(char var[30], int type);
	char var_list[20][30];	//20 variable names with each variable being atmost 50 characters long
	int string_or_var[20];
	extern int *yytext;
%}
%union{
int data_type;
char var_name[30];
}

%token NUMBER PROC MAIN BGIN COLON END ASSIGNMENT VAR_START COMA SEMICOLON VAR READ LB RB WRITE QUOTED_STRING EXIT

%token<data_type>INT
%token<data_type>CHAR
%token<data_type>FLOAT
%token<data_type>DOUBLE

%type<data_type>TYPE
%type<var_name>VAR

%start prm
%%

prm:	 			PROC MAIN BGIN COLON{
						printf("#include<stdio.h>\nint main()\n{\n");
					}
					STATEMENTS END COLON{
						printf("}\n");
					}

STATEMENTS: 		STATEMENTS STATEMENT
					| ;

STATEMENT: 			{printf("\t");} VAR_START VAR_LIST COLON TYPE SEMICOLON {
						if(current_data_type == 0)
							printf("int ");
						else if(current_data_type == 1)
							printf("char ");
						else if(current_data_type == 2)
							printf("float ");
						else if(current_data_type == 3)
							printf("double ");
						for(int i = 0; i < idx - 1; i++){
							insert_to_table(var_list[i], current_data_type);	
							printf("%s,", var_list[i]);
						}
						insert_to_table(var_list[idx - 1], current_data_type);
						printf("%s;\n", var_list[idx - 1]);
						idx = 0;
					}
					| {printf("\t");} VAR {
							printf("%s", yylval.var_name);
							if((temp=lookup_in_table(yylval.var_name))!=-1) {
								if(expn_type==-1)
									expn_type=temp;
								else if(expn_type!=temp) {
									printf("\n type mismatch in the expression\n");
									yyerror("");
									exit(0);
								}
							}
							else {
								printf("\n variable \" %s\" undeclared\n", yylval.var_name);
								yyerror("");
								exit(0);
							}
							expn_type=-1;
					} 
					ASSIGNMENT {printf("=");} A_EXPN SEMICOLON {
						printf(";\n");
					}
					| {printf("\t");} READ LB READ_VAR_LIST RB SEMICOLON {
						printf("scanf(\"");
						for(int i = 0; i < idx; i++) {
							if((temp=lookup_in_table(var_list[i])) != -1) {
								if(temp==0)
									printf("%%d");
								else if(temp==1)
									printf("%%c");
								else if(temp==2)
									printf("%%f");
								else
									printf("%%e");
							}
							else
							{
								printf("Cannot read undeclared variable %s !", yylval.var_name);
								yyerror("");
								exit(0);
							}
						}
						printf("\"");
						for(int i = 0; i < idx; i++) {
							printf(",&%s", var_list[i]);
						}
						printf(");\n");
						idx=0;
					}

					| {printf("\t");} WRITE LB WRITE_VAR_LIST RB SEMICOLON {
						char *s;
						printf("printf(\"");
						for(int i = 0; i < idx; i++) {
							if(string_or_var[i] == 1) {
								s = var_list[i];
								s++;
								s[strlen(s)-1] = 0;
								printf("%s", s);
							}
							else {	
								if((temp=lookup_in_table(var_list[i])) != -1) {
									if(temp==0)
										printf("%%d");
									else if(temp==1)
										printf("%%c");
									else if(temp==2)
										printf("%%f");
									else
										printf("%%e");
								}
								else
								{
									printf("Cannot read undeclared variable %s !", yylval.var_name);
									yyerror("");
									exit(0);
								}
							}
						}
						printf("\"");
						for(int i = 0; i < idx; i++) {
							if(string_or_var[i] != 1)
								printf(",%s", var_list[i]);
						}
						printf(");\n");
						idx = 0;
					}
					| EXIT COLON {printf("Exit:\n");}
								

WRITE_VAR_LIST:		QUOTED_STRING {
						strcpy(var_list[idx], yylval.var_name); 
						string_or_var[idx]=1; 
						idx++;
					} COMA WRITE_VAR_LIST
					| VAR {
						strcpy(var_list[idx], yylval.var_name); 
						idx++;
					} COMA WRITE_VAR_LIST
					| QUOTED_STRING{
						strcpy(var_list[idx], yylval.var_name);
						string_or_var[idx]=1;
						idx++;
					}
					| VAR{
						strcpy(var_list[idx], yylval.var_name);
						idx++;
					}

READ_VAR_LIST:		VAR {
						strcpy(var_list[idx], yylval.var_name); 
						idx++;
					} COMA READ_VAR_LIST
					| VAR {
						strcpy(var_list[idx], yylval.var_name); 
						idx++;
					}

A_EXPN : 			VAR {
						if((temp=lookup_in_table($1))!=-1) {
							if(expn_type==-1) {
								printf("%s", yylval.var_name);
								expn_type=temp;
							}
							else if(expn_type!=temp) {
								printf("\ntype mismatch in the expression\n");
								yyerror("");
								exit(0);
							}
						}
						else {
							printf("\n variable \"%s\" undeclared\n",$1);
							yyerror("");
							exit(0);
						}	
		 			}
					| NUMBER {printf("%s", yylval.var_name);}

VAR_LIST: 			VAR {
						strcpy(var_list[idx], $1); 
						idx++;
					} COMA VAR_LIST
					| VAR {
						strcpy(var_list[idx], $1); 
						idx++;
					}


TYPE : 				INT {
						$$=$1;
						current_data_type=$1;	
					}
					| CHAR  {
						$$=$1;
						current_data_type=$1;
					}
					| FLOAT {
						$$=$1;
						current_data_type=$1;
					}
					| DOUBLE {
						$$=$1;
						current_data_type=$1; 
					}

%%

int lookup_in_table(char var[30])
{
	for(int i=0; i<table_idx; i++)
	{
		if(strcmp(sym[i].var_name, var)==0)
			return sym[i].type;
	}
	return -1;
}

void insert_to_table(char var[30], int type)
{
	if(lookup_in_table(var)==-1)
	{
		strcpy(sym[table_idx].var_name,var);
		sym[table_idx].type = type;
		table_idx++;
	}
	else {
		printf("Multiple declaration of variable\n");
		yyerror("");
		exit(0);
	}
}

int main() {
	yyparse();
	return 0;
}

int yyerror(const char *msg) {
	extern int yylineno;
	printf("Parsing failed\nLine number: %d %s\n", yylineno, msg);
	success = 0;
	return 0;
}
