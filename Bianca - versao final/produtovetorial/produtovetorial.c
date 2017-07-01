#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3]= {2,1,-1}, b[3]={3,0,1},c[3]={2,-1,-3},bc[3],ac[3], ad[3], d[3];

    printf("Resolucao do exercicio 3, pagina 46, livro 'Vetores e Geometria Analitica' de Paulo Winterle.\n");

    bc[0]= c[0] - b[0];
    bc[1]= c[1] - b[1];
    bc[2]= c[2] - b[2];

    ac[0]= c[0] - a[0];
    ac[1]= c[1] - a[1];
    ac[2]= c[2] - a[2];

    printf("\nO vetor BC eh: (%d,%d,%d)\n", bc[0], bc[1], bc[2]);
    printf("O vetor AC eh: (%d,%d,%d)\n", ac[0], ac[1], ac[2]);

    ad[0]= (1*bc[1]*ac[2]) - ((1*bc[2]*ac[1]));
    ad[1]= (1*bc[2]*ac[0]) - ((1*bc[0]*ac[2]));
    ad[2]= (1*bc[0]*ac[1]) - ((1*bc[1]*ac[0]));

    printf("\nO vetor AD eh: (%d,%d,%d)\n", ad[0], ad[1], ad[2]);

    d[0]= ad[0] + a[0];
    d[1]= ad[1] + a[1];
    d[2]= ad[2] + a[2];

    printf("\nO o ponto D eh: (%d,%d,%d)\n", d[0], d[1], d[2]);


    return 0;
}
