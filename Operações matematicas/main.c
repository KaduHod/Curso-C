#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    num1 = 15;
    num2 = 20;
    int soma = num1 + num2;
    int sub = num1 - num2;

    printf("%i + %i = %i\n ", num1, num2, soma);

    printf("%i - %i = %i\n", num1, num2, sub);


    int mult = num1 * num2;
    int div = num2 / 4;

    printf("multiplicacao: %i x %i = %i\n ", num1, num2, mult);
    printf("divisao: %i / 3 = %i\n ", num2, div);
    return 0;
}
