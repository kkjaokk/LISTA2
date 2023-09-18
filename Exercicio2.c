#include <stdio.h>
#include <stdlib.h>
#include "matrizLib.h"


int main() {
	
	int matriz[100][100], l, c, i, j;
	
	printf("linhas: ");
	scanf("%d",&l);
	printf("Colunas: ");
	scanf("%d",&c);
	

	
	geraMatriz(matriz,l,c);
	int menor = matriz[0][0];
	for(i=0;i<l;i++){
		
			for(j=0;j<c;j++){
				
				if(matriz[i][j] < menor){
					
					menor = matriz[i][j];
					
				}
				
			}
		
	}
	
	printMatriz(matriz,l,j);
	
	printf("menor: %d",menor);
	
	
}
