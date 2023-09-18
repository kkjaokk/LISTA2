#include <stdlib.h>
#include <stdio.h>
#include "matrizLib.h"

int gerMatriz(int m[][100],int linhas,int cols){
	int i,j;
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
		   m[i][j]=rand()%50;
}

int main(){
	
	int matriz1[100][100], matriz2[100][100], i,j,l,c, soma[100][100];
	
	
	system("color A");
	scanf("%d%d",&l,&c);

	gerMatriz(matriz1, l, c);
	gerMatriz(matriz2, l, c);
	printMatriz(matriz1, l, c);
	printMatriz(matriz2, l, c);
	
	getch();
	
	for(i = 0; i<l; i++){
		
		for(j = 0; j<c; j++){
			
			soma[i][j] = matriz1[i][j] + matriz2[i][j];
			
		}
		
		
	}
	
	printMatriz(soma, l, c);
}
