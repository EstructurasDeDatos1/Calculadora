En este momento se ha declarado una estructura llamada TToken que permite almacenar un token 
en sus componenetes: el tipo de token y la cadena.

Además se ha agredado una varaibale strToken[] que es global y que pemite, con base en el tipo
obtener la cadena de caracteres correspondiente.

El programa principal toma una cadena y la separa en tokens, almacenando cada uno en un arreglo
para despues imprimirlo y finalmente liberar el espacio de memoria creado para cada token.

Modifique el archivo Tokens.c para que mediante la estructura TToken se separen los elementos de
la expresion, cerandose en cada paso el espacio de memoria para almacenar el token


