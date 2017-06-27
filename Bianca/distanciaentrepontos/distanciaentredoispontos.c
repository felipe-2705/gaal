#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a[3],b[3];
    int i;
    float distancia1, distanciafinal;

    printf("Resolucao do exercicio 6.1.1, pagina 190, livro 'Geometria Analítica' de Alfredo Steinbruch e Paulo Winterle.\n");
    printf("\nO programa calcula a distancia entre os pontos A e B.\n");

    printf("\nDigite as coordenadas do ponto A no modelo (x,y,z): \n");
    for(i=0; i<3; i++)
    {
        scanf("%f", &a[i]);
    }

    printf("\nDigite as coordenadas do ponto B no modelo (x,y,z): \n");
    for(i=0; i<3; i++)
    {
        scanf("%f", &b[i]);
    }

    distancia1= ((b[0] - a[0])*(b[0] - a[0])) + ((b[1] - a[1])*(b[1] - a[1])) + ((b[2] - a[2])*(b[2] - a[2]));
    distanciafinal= sqrt(distancia1);

    printf("\nA distancia entre os pontos A e B eh: %.2f\n" ,distanciafinal);

    return 0;
}
