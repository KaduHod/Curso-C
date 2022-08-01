#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    printf("Oi caralho!");
    char c;

    c = getchar();

    if(c == '1')
    {
        printf("Fez alguma coisa certa na vida >%c<", c);
        return 1;
    }
    printf("Tu cagou isso aqui pelos dedos >%c<", c);
    return 0;
}
