grammar ProgramacionNinos;

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
    | evento    // Nuevo: Agregamos eventos
    | funcionMatematica // Nuevo: Agregamos funciones matemáticas
    | comentario   // Nuevo: Agregamos comentarios
    ;

// Asignación de variables
asignacion: 
    'variable' ID '=' expresion
    | ID '=' expresion;


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
    | expresion ('+' | '-' | '*' | '/' | 'concatenar') expresion  // Nuevo: Agregamos operador de concatenación
    | expresion 'y' expresion    // Operadores lógicos
    | expresion 'o' expresion    // Operadores lógicos
    | 'no' expresion             // Nuevo: Negación
    | accesoArreglo
    | funcionMatematica
    ;

// Condiciones
condicion
    : expresion ('==' | '!=' | '<' | '>' | '<=' | '>=') expresion
    | expresion ('==' | '!=' ) STRING // Comparación de cadenas
    | condicion 'y' condicion
    | condicion 'o' condicion
    | 'no' '('condicion')'
    | 'cualquier' // Nuevo: Comodín para cualquier valor
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

// Nuevas instrucciones para eventos
evento: 'mover' ID 'hacia' expresion    // Nuevo: Mover objeto
      | 'girar' ID 'a' expresion        // Nuevo: Girar objeto
      | 'encender' ID                   // Nuevo: Encender algo (por ejemplo, luz)
      | 'apagar' ID                     // Nuevo: Apagar algo (por ejemplo, luz)
;

// Nuevas funciones matemáticas
funcionMatematica: 'sumar' '(' expresion ',' expresion ')' 
                 | 'restar' '(' expresion ',' expresion ')'
                 | 'multiplicar' '(' expresion ',' expresion ')'
                 | 'dividir' '(' expresion ',' expresion ')'
                 | 'elevar' '(' expresion ',' expresion ')'    
    		     | 'cuadrado' '(' expresion ')'

;

// Comentarios
comentario: 'comentar' STRING;  // Nuevo: Agregamos la posibilidad de escribir comentarios

// Tokens
ID: [a-zA-Z]+ ;
INT: [0-9]+ ;
STRING: '"' .*? '"' ;
WS: [ \t\n\r]+ -> skip ;
PUNTOYCOMA: ';' ;
COMENTARIO: '//' ~[\r\n]* -> skip ;
COMENTARIO_MULTILINEA: '/' .? '*/' -> skip ;