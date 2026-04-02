#include <stdio.h>
#include <stdlib.h>

/* Desenvolva um programa em linguagem C que aloque dinamicamente um vetor de números inteiros, inicialmente com capacidade para armazenar 5 elementos.
O programa deverá solicitar ao usuário a inserção de valores inteiros, armazenando-os no vetor. Sempre que a capacidade máxima for atingida,
o vetor deverá ser redimensionado dinamicamente, dobrando seu tamanho por meio da função realloc.
A inserção de dados deverá continuar até que o usuário informe um valor negativo, que indicará o encerramento da entrada de dados.
Ao final, o programa deverá:
•	Apresentar todos os elementos armazenados 
•	Informar a quantidade total de elementos inseridos 
•	Informar o tamanho final do vetor alocado 
•	Informar se houve mudança de endereçamento na realocação.
*/

int main (){
	int *ptr,tam=5,valor,tamanhoElm,End,x=0, novoTam=0,mudanca=0;
	
	ptr = malloc(tam*sizeof(int));
	
	if(ptr){
		printf("Memoria alocada com sucesso\n");
		system ("pause");
		system ("cls");
		}
		else{
		return 1;
		}
	
	do{
		
			if (x==tam){
			novoTam = tam * 2;
			int *temp = realloc(ptr,novoTam*sizeof(int));
			if (temp !=NULL){
				ptr = temp;
				tam = novoTam;
			}
				if (temp != ptr){
				mudanca = 1;
			}
		}
		
		
		
		printf("Digite o valor [%d]: ", x+1);
		scanf ("%d", &valor);
		*(ptr+x) = valor;
		
	
		x++;
	}while (x<=tam && valor>=0);
	
	tamanhoElm = x;
	
	for (x=0;x<tamanhoElm;x++){
		printf ("%d elemento adicionado %d\n",x+1, ptr[x]);
	}
	printf ("O tamanho total do vetor foi %d\n", tam);
	if (mudanca == 1){
		printf ("Teve mudanca");
	}
	else{
		printf ("Nao teve mudanca");
	}
	
	
	
	free (ptr);
	return 0;
	
	}
	

