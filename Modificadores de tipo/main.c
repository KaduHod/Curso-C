#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Modificadores de tipos!\n");

    unsigned short int u;
    unsigned long int a;
    double b;
    float f;
    char c;

    printf("%i %i %f %f %c", sizeof(u), sizeof(a), sizeof(b), sizeof(f), sizeof(c));

    /*
    signed   ->  + ou -
    unsigned -> +
    long     -> aumentar capacidade de armazenamento da nossa variavel
    short    -> diminuir a capacidade de armazenamento da variavel
    */
    return 0;
}
