#include <stdio.h>
#include <stdlib.h>
#include "matrizLib.h"


int main() {
	
	int matriz[100][100], l, c, i, j, x, cont = 0;
	
	printf("linhas: ");
	scanf("%d",&l);
	printf("Colunas: ");
	scanf("%d",&c);
	
	for(i=0;i<l;i++){
		
			for(j=0;j<c;j++){
				
				printf("Linha %d coluna %d: ",i+1,j+1);
				scanf("%d",&matriz[i][j]);
				
			}
		
	}
	
	printf("Digite um numero: ");
	scanf("%d",&x);

	for(i=0;i<l;i++){
		
			for(j=0;j<c;j++){
				
				if(matriz[i][j] == x){
					
					cont++;
					
				}
				
			}
		
	}
	
	printMatriz(matriz,l,j);
	
	printf("Existem %d numeros iguais a esse.",cont);
	
	
}
