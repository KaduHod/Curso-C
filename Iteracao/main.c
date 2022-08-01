#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed short int cont = 32767;
    signed long int limit = -32767;
    while (cont >= limit){
        printf("\nContando: %i", cont);
        --cont;
    }
    return 0;
}
