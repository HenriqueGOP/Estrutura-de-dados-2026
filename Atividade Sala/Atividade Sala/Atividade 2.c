#include <stdio.h>
#include <stdlib.h>

/*Desenvolva um programa em linguagem C que aloque dinamicamente um vetor (v1) contendo N
elementos do tipo inteiro, sendo N informado pelo usuário.
Após o preenchimento do vetor v1, crie dinamicamente um segundo vetor (v2) que contenha
apenas os valores pares presentes em v1.
Ao final, o programa deverá:
• Apresentar os elementos dos dois vetores
• Exibir o endereço de memória de cada elemento
Observações:
• Ambos os vetores devem utilizar alocação dinâmica
• O vetor v2 deve possuir tamanho compatível com a quantidade de números pares encontrado
*/

int main (){
	int *v1, *v2;
	int x, tam, tamp=0, j=0;
	
	printf ("Digite o tamanho do vetor\n");
	scanf ("%d", &tam);
	
	v1=malloc(tam*sizeof(int*));
	
	for (x=0;x<tam;x++){
		printf ("Digite o %d elemento\n", x+1);
		scanf ("%d", &v1[x]);
		if(v1[x] % 2 == 0){
			tamp++;
		}
	}
	v2=malloc(tamp*sizeof(int*));
	
	for (x=0;x<tam;x++){
		if (v1[x] % 2 == 0){
			v2[j] = v1[x];
			j++;
			
		}
		
	}
	
	for (x=0;x<tam;x++){
		printf ("O valor eh %d e o endereco de memoria eh %p\n", *(v1+x), &*(v1+x));
		
	}
	printf ("\n\n");
	
	for (x=0;x<tamp;x++){
		printf ("O valor eh %d e o endereco de memoria eh %p\n", *(v2+x), &*(v2+x));
	}
	
	free(v1);
	free(v2);
	
	return 0;
	
	
}
