#include<stdio.h>
#include<stdlib.h>

void soma();
void subtracao();
void multreal();
void multmat();

int main()
{
    int opcao;
    do
    {
        system("clear");
        printf("Este programa realiza as seguintes operacoes com matrizes:\n\n");
        printf("1 - Adicao de matrizes\n");
        printf("2 - Subtracao de matrizes\n");
        printf("3 - Multiplicacao entre matrizes\n");
        printf("4 - Multiplicacao de matriz por numero real\n");
        printf("0 - SAIR");
        printf("\n\n**********************************************************\n\n");
        printf("Digite o numero corresponde ao que deseja fazer: ");
        scanf("%d",&opcao);
        if (opcao==1)soma();
        else if(opcao==2)subtracao();
        else if(opcao==3)multmat();
        else if(opcao==4)multreal();
    }
    while(opcao);
    printf("Ate logo!!!!\n");
    return 0;
}

void soma()
{
    system("clear");
    int m,n,i,j;
    float matrizA[10][10],matrizB[10][10],Mres[10][10];
    printf("O programa ira somar uma matriz A com outra B (A+B)\n\n");
    printf("Digite o tamanho das matrizes. (Ex: 2 3 equivale a matriz 2X3)\n");
    scanf("%d%d",&m,&n);
    printf("Digite a matriz A:\n");
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("A[%d][%d]",i+1,j+1);
            scanf("%f",&matrizA[i][j]);
        }
    }
    printf("Digite a matriz B:\n");
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("A[%d][%d]",i+1,j+1);
            scanf("%f",&matrizB[i][j]);
        }
    }
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            Mres[i][j]=matrizA[i][j]+matrizB[i][j];
        }
    }
    system("clear");
    printf("Matriz A: ");
    for (i=0; i<m; i++)
    {
        printf("|");
        for(j=0; j<n; j++)printf("%7.2f",matrizA[i][j]);
        printf("  |\n");
        printf("          ");
    }
    printf("\nMatriz B: ");
    for (i=0; i<m; i++)
    {
        printf("|");
        for(j=0; j<n; j++)printf("%7.2f",matrizB[i][j]);
        printf("  |\n");
        printf("          ");
    }
    printf("\nA+B :");
    for (i=0; i<m; i++)
    {
        printf("|");
        for(j=0; j<n; j++)printf("%7.2f",Mres[i][j]);
        printf("  |\n");
        printf("     ");
    }
    printf("\n\nDigite ENTER para retornar ao menu principal.....");
    getchar();
    getchar();

}

void subtracao()
{
    system("clear");
    int m,n,i,j;
    float matrizA[10][10],matrizB[10][10],Mres[10][10];
    printf("O programa ira subtrair uma matriz A com outra B (A-B)\n\n");
    printf("Digite o tamanho das matrizes. (Ex: 2 3 equivale a matriz 2X3)\n");
    scanf("%d%d",&m,&n);
    printf("Digite a matriz A:\n");
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("A[%d][%d]",i+1,j+1);
            scanf("%f",&matrizA[i][j]);
        }
    }
    printf("Digite a matriz B:\n");
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("A[%d][%d]",i+1,j+1);
            scanf("%f",&matrizB[i][j]);
        }
    }
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            Mres[i][j]=matrizA[i][j]-matrizB[i][j];
        }
    }
    system("clear");
    printf("Matriz A: ");
    for (i=0; i<m; i++)
    {
        printf("|");
        for(j=0; j<n; j++)printf("%7.2f",matrizA[i][j]);
        printf("  |\n");
        printf("          ");
    }
    printf("\nMatriz B: ");
    for (i=0; i<m; i++)
    {
        printf("|");
        for(j=0; j<n; j++)printf("%7.2f",matrizB[i][j]);
        printf("  |\n");
        printf("          ");
    }
    printf("\nA-B :");
    for (i=0; i<m; i++)
    {
        printf("|");
        for(j=0; j<n; j++)printf("%7.2f",Mres[i][j]);
        printf("  |\n");
        printf("     ");
    }
    printf("\n\nDigite ENTER para retornar ao menu principal.....");
    getchar();
    getchar();

}

void multmat()
{
    system("clear");
    int k,mA,nA,mB,nB,i,j;
    float soma=0,matrizA[10][10],matrizB[10][10],Mres[10][10];
    printf("O programa ira multiplicar uma matriz A com outra B (A*B)\n\n");
    printf("Digite o tamanho da matriz A: (Ex: 2 3 equivale a matriz 2X3)\n");
    scanf("%d%d",&mA,&nA);
    printf("Digite a matriz A:\n");
    for (i=0; i<mA; i++)
    {
        for(j=0; j<nA; j++)
        {
            printf("A[%d][%d]",i+1,j+1);
            scanf("%f",&matrizA[i][j]);
        }
    }
    printf("Digite o tamanho da matriz B: (Ex: 2 3 equivale a matriz 2X3)\n");
    scanf("%d%d",&mB,&nB);
    if(nA==mB)
    {
        printf("Digite a matriz B:\n");
        for (i=0; i<mB; i++)
        {
            for(j=0; j<nB; j++)
            {
                printf("A[%d][%d]",i+1,j+1);
                scanf("%f",&matrizB[i][j]);
            }
        }
        for(i=0; i<mA; i++)
        {
            for(j=0; j<nB; j++)
            {
                for(k=0; k<nA; k++)soma+=matrizA[i][k]*matrizB[k][j];
                Mres[i][j]=soma;
                soma=0;
            }
        }
        system("clear");
        printf("Matriz A: ");
        for (i=0; i<mA; i++)
        {
            printf("|");
            for(j=0; j<nA; j++)printf("%7.2f",matrizA[i][j]);
            printf("  |\n");
            printf("          ");
        }
        printf("\nMatriz B: ");
        for (i=0; i<mB; i++)
        {
            printf("|");
            for(j=0; j<nB; j++)printf("%7.2f",matrizB[i][j]);
            printf("  |\n");
            printf("          ");
        }
        printf("\nMatriz A.B: ");
        for(i=0; i<mA; i++)
        {
            printf("|");
            for(j=0; j<nB; j++)printf("%7.2f",Mres[i][j]);
            printf(" |\n");
            printf("            ");
        }
    }
    else printf("ERRO....O numero de colunas da matriz A deve ser igual ao numero linha da matriz B\n");
    printf("\n\nDigite ENTER para retornar ao menu principal.....");
    getchar();
    getchar();
}

void multreal()
{
    system("clear");
    int m,num,n,i,j;
    float matrizA[10][10],Mres[10][10];
    printf("O programa ira multiplicar uma matriz A por um numero real\n\n");
    printf("Digite o tamanho da matrize A. (Ex: 2 3 equivale a matriz 2X3)\n");
    scanf("%d%d",&m,&n);
    printf("Digite a matriz A:\n");
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("A[%d][%d]",i+1,j+1);
            scanf("%f",&matrizA[i][j]);
        }
    }
    printf("Digite um numero real R que deseja multiplicar a matriz A: ");
    scanf("%d",&num);
    for (i=0; i<m; i++){
        for(j=0; j<n; j++){
            Mres[i][j]=matrizA[i][j]*num;
        }
    }
    system("clear");
    printf("Matriz A: ");
    for (i=0; i<m; i++)
    {
        printf("|");
        for(j=0; j<n; j++)printf("%7.2f",matrizA[i][j]);
        printf("  |\n");
        printf("          ");
    }
    printf("\nNumero R a multiplicar a matriz: %d\n\n",num);
    printf("\nMatriz A * %d:",num);
    for (i=0; i<m; i++)
    {
        printf("|");
        for(j=0; j<n; j++)printf("%7.2f",Mres[i][j]);
        printf("  |\n");
        printf("             ");
    }
    printf("\n\nDigite ENTER para retornar ao menu principal.....");
    getchar();
    getchar();
}
