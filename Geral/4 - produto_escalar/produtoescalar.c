#include <stdio.h>
#include <stdlib.h>

int main()
{
    float u[3]= {2,-3,-1}, v[3]= {1,-1,4}, m[3], m1[3], prodescalar;
    char resposta;

    printf("Resolucao do exercicio 1, pagina 36, livro 'Vetores e Geometria Analitica' de Paulo Winterle.\n");
    printf("\nVoce deseja calcular a), b), c) ou d)? Digite apenas a letra correspondete.\n");
    scanf(" %c", &resposta);

    while ((resposta!='a') && (resposta!='b') && (resposta!='c') && (resposta!='d') && (resposta!='A') && (resposta!='B') && (resposta!='C') && (resposta!='D'))
    {
        printf("\nDigite apenas a letra correspondente.\n");
        printf("Voce deseja calcular a a), b), c) ou d)? Digite apenas a letra correspondete.\n");
        scanf(" %c", &resposta);
    }

    if ((resposta=='A') || (resposta=='a'))
    {
        printf("\na) Calcular 2u . (-v)");

        m[0]= 2*u[0];
        m[1]= 2*u[1];
        m[2]= 2*u[2];

        m1[0]= -v[0];
        m1[1]= -v[1];
        m1[2]= -v[2];

        prodescalar= (m[0]*m1[0]) + (m[1]*m1[1]) + (m[2]*m1[2]);

        printf("\nResposta a) --> %.2f\n" ,prodescalar);

    }

    else if ((resposta=='b') || (resposta=='B'))
    {
        printf("\nb) Calcular (u+3v).(v - 2u)");

        m[0]= u[0] + (3*v[0]);
        m[1]= u[1] + (3*v[1]);
        m[2]= u[2] + (3*v[2]);

        m1[0]= v[0] - (2*u[0]);
        m1[1]= v[1] - (2*u[1]);
        m1[2]= v[2] - (2*u[2]);

        prodescalar= (m[0]*m1[0]) + (m[1]*m1[1]) + (m[2]*m1[2]);
        printf("\nResposta b) --> %.2f\n" ,prodescalar);


    }

    else if ((resposta=='c') || (resposta=='C'))
    {
        printf("\nc) Calcular (u+v).(u-v)");

        m[0]= u[0] + v[0];
        m[1]= u[1] + v[1];
        m[2]= u[2] + v[2];

        m1[0]= u[0] - v[0];
        m1[1]= u[1] - v[1];
        m1[2]= u[2] - v[2];

        prodescalar= (m[0]*m1[0]) + (m[1]*m1[1]) + (m[2]*m1[2]);
        printf("\nResposta c) --> %.2f\n" ,prodescalar);
    }

    else if ((resposta=='d') || (resposta=='D'))
    {
        printf("\nd) Calcular (u+v).(v-u)");

        m[0]= u[0] + v[0];
        m[1]= u[1] + v[1];
        m[2]= u[2] + v[2];

        m1[0]= v[0] - u[0];
        m1[1]= v[1] - u[1];
        m1[2]= v[2] - u[2];

        prodescalar= (m[0]*m1[0]) + (m[1]*m1[1]) + (m[2]*m1[2]);
        printf("\nResposta d) --> %.2f\n" ,prodescalar);

    }

    return 0;
}
