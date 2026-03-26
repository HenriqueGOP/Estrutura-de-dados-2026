#include <stdio.h>
#include <stdlib.h>

/*Construa um programa em linguagem C que aloque dinamicamente uma matriz de dimensão 5x7
do tipo inteiro.
Preencha a matriz com valores aleatórios no intervalo de 10 a 500.
Em seguida, apresente todos os elementos da matriz em formato estruturado (linhas e colunas).
Observação:
A matriz deve ser implementada utilizando alocação dinâmica (ponteiro de ponteiro).*/

int main (){
	
	int **vet1,linha=5,coluna=7,x,y;
	
	vet1 = malloc(linha*sizeof(int*));
	
	for (x=0;x<linha;x++){
			vet1[x] = malloc(coluna*sizeof(int));
	}
	
	for(x=0;x<linha;x++){
		printf ("\n ");
		for(y=0;y<coluna;y++){
			vet1[x][y] = rand() % 490+11;
			printf ("%4d ", vet1[x][y]);
		}
		
	}
}
