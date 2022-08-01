#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\t\tMédia escolar\n");
    float mat,port,ing,art, media;

    printf("\nDigite a nota de matematica:");
    scanf("%f", &mat);

    printf("\nDigite a nota de portugues:");
    scanf("%f", &port);

    printf("\nDigite a nota de ingles:");
    scanf("%f", &ing);

    printf("\nDigite a nota de artes:");
    scanf("%f", &art);

    media = (mat + port + ing + art) / 4;

    printf("A sua média foi de %f\n", media);

    if(media >= 7)
    {
        printf("Aprovado");
        return 0;
    }

    printf("Reprovado");
    return 0;



}
