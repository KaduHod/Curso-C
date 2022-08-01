#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Tabuada!\n");

    unsigned short int limit = 10;
    unsigned short int count = 1;
    unsigned short int number;
    unsigned short int mult;


    printf("Digite o numero que deseja ver a tabuada\n");
    scanf("%i", &number);

    while(count <= limit)
    {
        mult = number * count;
        printf("%i x %i = %i \n", number, count,  number * count);
        count++;
    }

    return 0;
}
