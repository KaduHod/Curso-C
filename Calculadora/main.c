#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    printf("Calculadora!\n");
    char operador;
    unsigned short int op;
    float num1, num2, result;


    do{
        num1 = num2 = result = 0;
        printf("\t(1) somar\n");
        printf("\t(2) subtrair\n");
        printf("\t(3) multiplicar\n");
        printf("\t(4) dividir\n");
        printf("\t(0) sair\n");

        scanf("%i", &op);

        if(op == 0) {return 0;}

        printf("\tDigite o número um:\n\t ");
        scanf("%f", &num1);

        printf("\tDigite o número dois:\n\t ");
        scanf("%f", &num2);

        switch (op)
        {
            case 1:
                result = num1 + num2;
                operador = "+";
                break;

            case 2:
                result = num1 - num2;
                operador = "-";
                break;

            case 3:
                result = num1 * num2;
                operador = "*";
                break;

            case 4:
                result = num1 / num2;
                operador = "/";
                break;
            case 0 :
                return 0;
                break;
        }

        printf("\n %f %c %f = %f\n ", num1,operador,num2,result);
        system("pause");
        system("cls");

    }while(1 == 1);
    return 0;
}
