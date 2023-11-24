%{

#include <stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996 4013 4244 4267)

%}

%union{
	char* str;
	int num;
}


/*Tokens*/
%token PROGRAM FUNCTION PROCEDURE BEGIN_TOKEN END
%token VAR CONST INTEGER REAL CHAR STRING BOOLEAN ARRAY OF
%token AND OR NOT
%token PLUS MINUS MULTIPLICATION DIVISION DIV MOD
%token <str> EXP
%token WHILE DO FOR TO DOWNTO
%token READ WRITE READLN WRITELN
%token IF THEN ELSE
%token ASSIGN L_PARENT R_PARENT L_S_BRACKET R_S_BRACKET SEMICOLON DOT COMMA COLON EQUAL MONEY_SIGN AMPERSAND 
%token PERCENTAGE L_BRACKET R_BRACKET LESS GREATER GATITO QUOTATION_MARK NOT_EQUAL DOUBLE_DOT
%token OPEN_COMMENT CLOSE_COMMENT
%token <str> LETRA 
%token <num> DIGITO_NO_CERO 
%token <num> CERO


%%

programa:	comentario PROGRAM identificador L_PARENT identificador_lista R_PARENT cambio_linea declaraciones subprograma_declaraciones instruccion_compuesta DOT;

identificador:	letra
		| letra identificador_siguiente
		;
		
identificador_siguiente:	letra identificador_siguiente
				| digito identificador_siguiente
				|/*vacio*/
				;
				
letra:	LETRA
	| EXP
	;
				
digito:	DIGITO_NO_CERO
	| CERO
	;
	
relop:	AND
	| OR
	;
	
addop:	PLUS
	| MINUS
	;
	
mulop:	MULTIPLICATION
	| DIVISION
	| DIV
	| MOD
	;
	
identificador_lista:	identificador
			| identificador_lista COMMA identificador
			;
			
declaraciones:	declaraciones_variables
		| declaraciones_constantes
		;
		
declaraciones_variables:	declaraciones_variables VAR identificador_lista COLON tipo cambio_linea
				| /*vacio*/
				;
				
declaraciones_constantes:	declaraciones_constantes CONST identificador EQUAL constante_entera cambio_linea
				| declaraciones_constantes CONST identificador EQUAL constante_real cambio_linea
				| declaraciones_constantes CONST identificador EQUAL constante_cadena cambio_linea
				| /*vacio*/
				;
				
tipo:	estandar_tipo
	| ARRAY L_S_BRACKET numero_entero DOUBLE_DOT numero_entero R_S_BRACKET OF estandar_tipo
	;	

estandar_tipo:	INTEGER
		| REAL
		| CHAR
		| STRING
		| BOOLEAN
		;
		
subprograma_declaraciones:	subprograma_declaraciones subprograma_declaracion cambio_linea
				| /*vacio*/
				;
				
subprograma_declaracion:	subprograma_encabezado declaraciones subprograma_declaraciones instruccion_compuesta
				;
				
subprograma_encabezado:	FUNCTION identificador argumentos COLON estandar_tipo cambio_linea
			| PROCEDURE identificador argumentos cambio_linea
			;
argumentos:	L_PARENT parametros_lista R_PARENT
		| /*vacio*/
		;
		
parametros_lista:	identificador_lista COLON tipo
			| parametros_lista SEMICOLON identificador_lista COLON tipo
			;
			
instruccion_compuesta:	BEGIN_TOKEN instrucciones_opcionales END
			;
			
instrucciones_opcionales:	instrucciones_lista
				| /*vacio*/
				;
				
instrucciones_lista:	instrucciones
			| instrucciones_lista cambio_linea instrucciones
			;
			
instrucciones:	variable_asignacion
		| procedure_instruccion
		| instruccion_compuesta
		| if_instruccion
		| repeticion_instruccion
		| lectura_instruccion
		| escritura_instruccion
		;
		
repeticion_instruccion:	WHILE relop_expresion DO instrucciones
			| FOR for_asignacion TO expresion DO instrucciones
			| FOR for_asignacion DOWNTO expresion DO instrucciones
			;
			
lectura_instruccion:	READ L_PARENT identificador R_PARENT
			| READLN L_PARENT identificador R_PARENT
			;
			
escritura_instruccion: WRITE L_PARENT constante_cadena COMMA identificador R_PARENT
			| WRITELN L_PARENT constante_cadena COMMA identificador R_PARENT
			| WRITE L_PARENT constante_cadena R_PARENT
			| WRITELN L_PARENT constante_cadena R_PARENT
			| WRITE L_PARENT constante_cadena COMMA expresion R_PARENT
			| WRITELN L_PARENT constante_cadena COMMA expresion R_PARENT
			| WRITE L_PARENT identificador R_PARENT
			| WRITELN L_PARENT identificador  R_PARENT
			;
			
constante_cadena:	QUOTATION_MARK cadena QUOTATION_MARK
			;
			
cadena:	cadena caracter_alfanumerico
	| /*vacio*/
	;
	
caracter_alfanumerico:	letra
			| digito
			| MONEY_SIGN
			| AMPERSAND
			| DIVISION 
			| PLUS
			| MINUS
			| MULTIPLICATION
			| PERCENTAGE
			| EQUAL
			| COLON
			| L_BRACKET
			| R_BRACKET
			| GREATER
			| LESS
			| cambio_linea
			| L_S_BRACKET 
			| R_S_BRACKET
			| COMMA
			| DOT
			| GATITO 
			;
			
if_instruccion:	IF relop_expresion THEN instrucciones
		| IF relop_expresion THEN instrucciones ELSE instrucciones
		;
		
variable_asignacion:	variable ASSIGN expresion
			;
			
for_asignacion:	variable_asignacion
		| variable
		;
		
variable:	identificador
		| identificador L_S_BRACKET expresion R_S_BRACKET
		;
		
procedure_instruccion:	identificador
			| identificador L_PARENT expresion_lista R_PARENT
			;
			
relop_expresion:	relop_expresion OR relop_and
			| relop_and
			;
			
relop_and:	relop_and AND	relop_not
		| relop_not
		;
		
relop_not:	NOT relop_not 
		| relop_paren
		;
		
relop_paren:	L_PARENT relop_expresion R_PARENT
		| relop_expresion_simple
		;
		
relop_expresion_simple:	expresion relop expresion
			| comparacion
			;
			
expresion_lista:	expresion
			| expresion_lista COMMA expresion
			;

expresion:	termino
		| expresion addop termino
		;
		
termino:	factor
		| termino mulop factor
		;
		
llamado_funcion:	identificador L_PARENT expresion_lista R_PARENT
			;
		
factor:	identificador
	| identificador L_S_BRACKET expresion R_S_BRACKET
	| llamado_funcion
	| constante_entera
	| constante_real
	| signo factor
	| L_PARENT expresion R_PARENT
	;

signo:	PLUS
	| MINUS
	| /*vacio*/
	;
	
constante_entera:	signo numero_entero
			;
			
numero_entero:	DIGITO_NO_CERO numero
		;
	
numero:	numero digito
	| /*vacio*/
	;
	
constante_real:	signo numero_entero DOT numero_entero
		| signo numero_entero DOT numero_entero exponente
		;
		
exponente:	EXP signo numero_entero
		;
		
comentario:	OPEN_COMMENT contenido CLOSE_COMMENT
		| /* vacio */
		;

contenido:	tokens_disponibles contenido
		| tokens_disponibles
		| /*vacio*/
		;

cambio_linea:	SEMICOLON comentario
		;
		
tokens_disponibles:	caracter_alfanumerico
			| PROGRAM
			| FUNCTION
			| PROCEDURE
			| BEGIN_TOKEN
			| END
			| VAR
			| CONST
			| INTEGER
			| REAL
			| CHAR
			| STRING
			| BOOLEAN
			| ARRAY
			| OF
			| AND
			| OR
			| NOT
			| DIV
			| MOD
			| WHILE
			| DO
			| FOR
			| TO
			| DOWNTO
			| READ
			| WRITE
			| READLN
			| WRITELN
			| IF
			| THEN
			| ELSE
			;
			
comparacion:	identificador EQUAL expresion_comparador
		| identificador GREATER expresion_comparador
		| identificador LESS expresion_comparador
		| identificador NOT_EQUAL expresion_comparador
		| identificador GREATER EQUAL expresion_comparador
		| identificador LESS EQUAL expresion_comparador
		;
		
expresion_comparador:	identificador
			| signo digito
			;

%%


int yyerror(char *s) {

   printf("Error %s\n", s);
   exit(1); /* Sale del programa */
   return 0;
   
}

extern FILE* yyin;

int main(int argc, char * argv[]) {

    FILE* file = fopen("C:/Users/sonic/Documents/UP/Semestre 7/Lenguajes/Proyecto Final/Pruebas.txt","r");
    if (!file){
    	yyerror("Archivo no encontrado");
    }
    
    yyin = file;
    yyparse();
    printf("Programa reconocido correctamente\n");
    return 0;
   
}