grammar ProgramacionNiños;

// Reglas principales
programa: (instruccion)+ EOF;

instruccion
    : asignacion
    | imprimir
    | condicional
    | bucle
    | bucleMientras
    | buclepara
    | arregloDeclaracion
    | accesoArreglo
    | clase
    | creacionObjeto
    | accesoObjeto
    | metodo
    | llamadaFuncion
    | segun
    | pausar
    | continuar
    | entrada
    ;

// Asignación de variables
asignacion: 'variable' ID '=' expresion;

// Impresión de valores
imprimir: 'imprimir' '(' expresion ')';

// Entrada de valores
entrada: 'leer' '(' ')';

// Condicionales
condicional: 'si' '(' condicion ')' '{' (instruccion)* '}' ('sino' '{' (instruccion)* '}')?;

// Bucles
bucle: 'repetir' '(' expresion ')' '{' (instruccion)* '}' ;

bucleMientras: 'mientras' '(' condicion ')' '{' (instruccion)* '}' ;

buclepara: 'para' '(' asignacion PUNTOYCOMA condicion PUNTOYCOMA asignacion ')' '{' (instruccion)* '}' ;

// Expresiones (números, variables, operaciones, booleanos, cadenas)
expresion
    : INT
    | STRING
    | 'verdadero' | 'falso'
    | ID
    | expresion ('+' | '-' | '*' | '/') expresion
    | accesoArreglo
    ;

// Condiciones
condicion
    : expresion ('==' | '!=' | '<' | '>' | '<=' | '>=') expresion
    | condicion 'y' condicion
    | condicion 'o' condicion
    | 'no' condicion
    ;

// Funciones y llamados a funciones
funcion: 'definir' ID '(' (ID (',' ID))? ')' '{' (instruccion) '}' ;

llamadaFuncion: ID '(' (expresion (',' expresion)*)? ')' ;

// Clases y objetos
clase: 'clase' ID ('hereda' ID)? '{' (asignacion | metodo)* '}' ;

metodo: 'definir' ID '(' (ID (',' ID))? ')' '{' (instruccion) '}' ;

creacionObjeto: 'nuevo' ID '(' ')' ;

accesoObjeto: ID '.' ID ;

// Arreglos
arregloDeclaracion: 'arreglo' ID '[' INT ']' '=' '{' (expresion (',' expresion)*)? '}' ;

accesoArreglo: ID '[' expresion ']' ;

// Switch (según)

segun: 'segun' '(' expresion ')' '{' (caso)* ('defecto' (instruccion | '{' (instruccion)* '}'))? '}';  // Se permite una instrucción sin llaves

caso: 'caso' expresion ':' (instruccion)* ;

// Control de bucles (pausar y continuar)
pausar: 'pausar' ;

continuar: 'continuar' ;

// Tokens
ID: [a-zA-Z]+ ;
INT: [0-9]+ ;
STRING: '"' .*? '"' ;
WS: [ \t\n\r]+ -> skip ;
PUNTOYCOMA: ';' ;
COMENTARIO: '//' ~[\r\n]* -> skip ;
COMENTARIO_MULTILINEA: '/' .? '*/' -> skip ;

