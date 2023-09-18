#include <stdlib.h>
#include <stdio.h>
#include "matrizLib.h"

void lerMatriz(int m[][100],int linhas,int cols){
	int i,j;
	srand(time(NULL));
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
		   scanf("%d",&m[i][j]);
}

void Mult(int matriz[100][100], int matriz2[100][100], int resultado[100][100], int l1, int c1, int c2){
	int j, i, k;
	
	for (i = 0; i < l1; i++) {
        for ( j = 0; j < c2; j++) {
            for ( k = 0; k < c1; k++) {
                resultado[i][j] += matriz[i][k] * matriz2[k][j];
            }
        }
    }
}
	
void showMatriz(int m[][100],int linhas,int cols){
	int i,j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++)
		   printf("%3d |",m[i][j]);
	  printf("\n");	   
	}
	printf("\n");
}

int main(){
	
	int matriz[100][100], matriz2[100][100], result[100][100], l1 = 2, c1 = 3, l2 = 3, c2 = 2, i, j, aux;
	
	system("color A");
	
	lerMatriz(matriz,l1,c1);
	
	printf("------");
	printf("\n");
	
	lerMatriz(matriz2,l2,c2);
	
	printf("------");
	printf("\n");
	printf("\n");
	
	showMatriz(matriz,l1,c1);
	
	printf("\n");
	
	showMatriz(matriz2,l2,c2);
	
	printf("\n");
	
	Mult(matriz, matriz2, result, l1, c1, c2);
	
	printf("\n");
	
	showMatriz(result,l1,c2);
	
	
	
}
