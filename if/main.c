#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("Skynet 1,0 \n");
    printf("DIGITE DOIS NUMEROS E DIREI QUAL É MAIOR\n");
    scanf("%i\n%i", &num1, &num2);

    if(num1 > num2)
    {
        printf("%i eh maior que %i",num1, num2);return 0;
    }

    if(num1 < num2)
    {
        printf("%                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   i eh maior que %i",num2, num1);return 0;
    }

    printf("%i é igual a %i",num2, num1);


    return 0;

}
