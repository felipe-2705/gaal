#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,aux,aux1,u[3]= {3,-1,1},v[3]= {1,2,2}, w[3]= {2,0,-3}, produtomisto;
    char resposta;

    printf("Resolucao do exercicio 1, pagina 52, livro 'Vetores e Geometria Analitica' de Paulo Winterle.\n");

    printf("\nVoce deseja calcular a) ou b)? Digite apenas a letra correspondete.\n");
    scanf(" %c", &resposta);

    while ((resposta!='a') && (resposta!='b') && (resposta!='B') && (resposta!='A'))
    {
        printf("\nDigite apenas a letra correspondente.\n");
        printf("Voce deseja calcular a) ou b)? Digite apenas a letra correspondete.\n");
        scanf(" %c", &resposta);
    }

    if ((resposta=='A') || (resposta=='a'))
    {
        printf("\nVetor u= (%d,%d,%d)\n", u[0], u[1], u[2]);
        printf("Vetor v= (%d,%d,%d)\n", v[0], v[1], v[2]);
        printf("Vetor w= (%d,%d,%d)\n", w[0], w[1], w[2]);

        produtomisto= (u[0]*v[1]*w[2]) + (u[1]*v[2]*w[0]) + (u[2]*v[0]*w[1]) - ((w[0]*v[1]*u[2]) + (w[1]*v[2]*u[0]) + (w[2]*v[0]*u[1]));
        printf("\nResposta a) -->: %d\n", produtomisto);
    }

    else if ((resposta=='b') || (resposta=='B'))
    {
        for (i=0; i<3; i++)
        {
            aux = w[i];
            w[i] = u[i];
            u[i]= aux;
        }

        for (i=0; i<3; i++)
        {
            aux1= u[i];
            u[i] = v[i];
            v[i]= aux1;
        }

        printf("\nVetor w= (%d,%d,%d)\n", w[0], w[1], w[2]);
        printf("Vetor u= (%d,%d,%d)\n", u[0], u[1], u[2]);
        printf("Vetor v= (%d,%d,%d)\n", v[0], v[1], v[2]);

        produtomisto= (u[0]*v[1]*w[2]) + (u[1]*v[2]*w[0]) + (u[2]*v[0]*w[1]) - ((w[0]*v[1]*u[2]) + (w[1]*v[2]*u[0]) + (w[2]*v[0]*u[1]));
        printf("\nResposta b) -->: %d\n", produtomisto);
    }

    return 0;
}
