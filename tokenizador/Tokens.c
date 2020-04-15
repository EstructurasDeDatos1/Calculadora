#include <stdio.h>
#include <stdlib.h>

int esOperaador(char c) {
    int k;
    static char operadores[] = "+-*/^()";
    for (k=0; k<strlen(operadores); k++)
        if (c == operadores[k])
            return k;
    return -1;
}

char *token(char *s) {
    static char cadena[1000];
    static char *actual;
    int p,k;
    char res[1000];


    if (s != NULL) {
        strcpy(cadena,s);
        actual = cadena;
    }

    while ((*actual == ' ') || (*actual =='\n') || (*actual=='\t'))
        actual++;

    if (*actual == '\0')
        return NULL;


    p = esOperaador(*actual);

    if ( p!=-1 ) {
        res[0] = *actual;
        res[1] = '\0';
        actual = actual + 1;
        return strdup(res);
    } else if (isdigit(*actual) || (*actual == '.')) {
        k = 0;
        while ( (*actual != '\0') && (isdigit(*actual) || *actual == '.' ) ) {
            res[k] = *actual;
            actual = actual + 1;
            k = k+1;
        }
        res[k] = '\0';
        return strdup(res);
    } else if (isalpha(*actual)) {
        k = 0;
        while ( (*actual != '\0') && isalpha(*actual)) {
            res[k] = *actual;
            actual = actual + 1;
            k = k+1;
        }
        res[k] = '\0';
        return strdup(res);
    }

    res[0] = *actual;
    res[1] = '\0';
    actual++;
    return strdup(res);

}









