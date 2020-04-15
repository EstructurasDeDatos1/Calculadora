#include <stdio.h>
#include <stdlib.h>

int main() {
    //char cadena[] = "          ( -36.5 *(   23.4- 2)^2/56)/3\n       ";
    char cadena[] = " a.4  43.3.3 + +4.8 (ab-k+ab+k)k^s";
    char *p;

    p = token(cadena);
    printf("Cadena: %s\n",cadena);
     while (p != NULL) {
       printf("token: [%s]\n",p);
       free(p);
       p = token(NULL);
    }
    printf("fin");
    return 0;
}
