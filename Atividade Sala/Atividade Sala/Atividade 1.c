#include <stdio.h>
#include <stdlib.h>

/*Desenvolva um programa em linguagem C que aloque dinamicamente um vetor de 10 elementos
do tipo inteiro.
Preencha o vetor com valores aleatórios.
Em seguida, apresente todos os elementos utilizando aritmética de ponteiros (sem o uso de
notação de índice).
Observação: A alocação de memória deve ser realizada utilizando malloc.*/

int main (){
	
	int *vetor1, x;
	
	vetor1=malloc(10*sizeof(int));
	
	for (x=0;x<10;x++){
		vetor1[x] = rand () % 100;
		printf ("%d\n", *(vetor1+x));
	}
	


}
