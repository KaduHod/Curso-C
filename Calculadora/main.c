#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculadora!\n");

    int num1, num2, soma, sub, mult, div;
    int resto;
    printf("Digite os números da soma e subtração\n");
    scanf("%i \n%i", &num1, &num2);

    soma  = num1 + num2;
    sub   = num1 - num2;
    mult  = num1 * num2;
    div   = num1 / num2;
    resto = num1 % num2;

    printf("soma: %i \nsub: %i\nmulti: %i\n div: %i\n resto: %i", soma, sub, mult, div, resto);

    return 0;
}
