#include<stdio.h>
#include<stdlib.h>
#define n 2

int main(){
    int i,j;
    float matriz[2][2],inversa[2][2],det;
    printf("Ola, Este programa calcula, se existir, a inversa de uma matriz 2X2 dada.\n\nDigite ENTER para continuar....");
    getchar();
    system("clear");
    printf("Digite os elementos de sua matriz 2X2:\n");
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("A[%d][%d] = ",i+1,j+1);
            scanf("%f",&matriz[i][j]);
        }
    }
    system("clear");
    det=matriz[0][0]*matriz[1][1]-matriz[1][0]*matriz[0][1];
    if (det!=0){
        inversa[0][0]=matriz[1][1];
        inversa[1][1]=matriz[0][0];
        inversa[0][1]=-1*matriz[0][1];
        inversa[1][0]=-1*matriz[1][0];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                inversa[i][j]/=det;
            }
        }
        printf("Matriz :");
        for (i=0;i<n;i++){
            if(i==1)printf("        ");
            printf("|");
            for(j=0;j<n;j++){
                printf("%5.2f ",matriz[i][j]);
            }
            printf("|\n");
        }
        printf("\n");
        printf("Inversa :");
        for (i=0;i<n;i++){
            if(i==1)printf("         ");
            printf("|");
            for(j=0;j<n;j++){
                printf("%5.2f ",inversa[i][j]);
            }
            printf("|\n");
        }
    }
    else printf("O Determinante eh 0, portanto essa matriz nao eh invertivel\n");
    return 0;
}
