#include <stdio.h>
#include <stdlib.h>
#include "matrizLib.h"


int main() {
	
	int matriz[100][100], l, c, i, j, tamanho = 0;
	
	printf("linhas: ");
	scanf("%d",&l);
	printf("Colunas: ");
	scanf("%d",&c);
	
	
	int diagonal[100];
	
	for(i=0;i<l;i++){
		
		for(j=0;j<c;j++){
			matriz[i][j]=rand()%50;
			
			if(i==j){
				
				
				diagonal[tamanho] = matriz[i][j];
				tamanho++;
				
			}
		}
		
	}		

	printMatriz(matriz,l,c);
	
	
	printf("Sua diagonal principal: ");
	
		for(i=0; i<tamanho; i++){
		
			printf("%d |",diagonal[i]);
		
		}
		   
	}
	
	

	
	
	
	

