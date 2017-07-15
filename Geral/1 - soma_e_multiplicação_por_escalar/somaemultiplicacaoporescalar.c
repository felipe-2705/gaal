#include <stdio.h>
#include <stdlib.h>

int main()
{
    float u[2],v[2],w[2];
    char resposta,resposta1;

    printf("Digite apenas 'S' para soma ou 'M' para multiplicacao por escalar' z\n");
    scanf(" %c", &resposta);

    while((resposta!= 'S') && (resposta!= 's') && (resposta!= 'm') && (resposta!= 'm'))
    {
        printf("\nOpcao invalida, digite apenas 'S' para soma ou 'M' para multiplicacao por escalar\n");
        scanf(" %c", &resposta);
    }

    if ((resposta=='s') || (resposta=='S'))
    {
        u[0]= 3;
        u[1]= -1;
        v[0]= -2;
        v[1]= 4;

        printf("Resolucao do exercicio 2.3.3, pagina 21, livro 'Geometria Analítica' de Alfredo Steinbruch e Paulo Winterle:\n");
        printf("\nVetor u: (%.2f,%.2f)\n" ,u[0],u[1]);
        printf("Vetor v: (%.2f,%.2f)\n" ,v[0],v[1]);

        w[0]= (v[0]/4) - u[0];
        w[1]= (v[1]/4) - u[1];

        printf("\nVetor w: (%.2f,%.2f)\n" ,w[0],w[1]);
    }

    else
    {
        printf("\nResolucao do exercicio do site da UFRJ (http://www.im.ufrj.br/dmm/projeto/projetoc/precalculo/sala/conteudo/capitulos/cap91s4.html):  \n");

        printf("Escolha o item a ser resolvido: a, b ou c.\n");
        scanf(" %c", &resposta1);

        while((resposta1!= 'a') && (resposta1!= 'b') && (resposta1!= 'c') && (resposta1!= 'A') && (resposta1!= 'B') && (resposta1!= 'C'))
        {
            printf("\nOpcao invalida, digite apenas a,b ou c.\n");
            scanf(" %c", &resposta1);
        }

        if ((resposta1=='a') || (resposta1=='A'))
        {
            u[0]= -1;
            u[1]= 3;
            v[0]= 4;
            v[1]= 7;

            printf("\na) Calcular u + v: \n");
            w[0]= u[0] + v[0];
            w[1]= u[1] + v[1];

            printf("Resposta da a) --> (%.2f,%.2f)\n" ,w[0],w[1]);
        }

        else if ((resposta1=='b') || (resposta1=='B'))
        {
            u[0]= -1;
            u[1]= 3;

            printf("\nb) Calcular 3u: \n");
            w[0]= 3*u[0];
            w[1]= 3*u[1];
            printf("Resposta da b) --> (%.2f,%.2f)\n" ,w[0],w[1]);
        }

        else if ((resposta1=='c') || (resposta1=='C'))
        {
            u[0]= -1;
            u[1]= 3;
            v[0]= 4;
            v[1]= 7;

            printf("\nc) Calcular 2u - v: \n");
            w[0]= (2*u[0]) - v[0];
            w[1]= (2*u[1]) - v[1];

            printf("Resposta da c) --> (%.2f,%.2f)\n" ,w[0],w[1]);
        }
    }

    return 0;
}
