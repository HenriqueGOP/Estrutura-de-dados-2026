#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	int x = 10, y = 20, z = 100, N = 24, aow;
	char tc = 'c';
	int *prt_x, *prt_y, *prt_z, *prt_N;
	char *prt_tc;
	char nome [40];
	int tamanho;
	
	prt_x=&x;
	prt_y=&y;
	prt_z=&z;
	prt_N=&N;
	prt_tc=&tc;
	
	printf (" valor x = %d \n", x);
	printf (" valor y = %d \n", y);
	printf (" valor z = %d \n", z);
	printf (" valor N = %d \n", N);
	printf ("valor tc = %c \n", tc);
	printf ("---------------------------------------\n");
	
	printf (" End. Mem. x = %p \n", &x);
	printf (" End. Mem. y = %p \n", &y);
	printf (" End. Mem. z = %p \n", &z);
	printf (" End. Mem. N = %p \n", &N);
	printf ("End. Mem. tc = %p \n", &tc);
	printf ("---------------------------------------\n");
	
	printf ("End. Mem. ptr1 = %p \n", &prt_x);
	printf ("End. Mem. ptr2 = %p \n", &prt_y);
	printf ("End. Mem. ptr3 = %p \n", &prt_z);
	printf ("End. Mem. ptr4 = %p \n", &prt_tc);
	printf ("End. Mem. ptr N = %p \n", &prt_N);
	printf ("---------------------------------------\n");
	
	printf ("Valor ptr1 = %p \n", &x);
	printf ("Valor ptr2 = %p \n", &y);
	printf ("Valor ptr3 = %p \n", &z);
	printf ("Valor ptr4 = %p \n", &N);
	printf ("Valor ptr N = %p \n", &tc);
	printf ("---------------------------------------\n");
	
	printf ("Valor onde ptr1 aponta = %d \n", *prt_x);
	printf ("Valor onde ptr2 aponta = %d \n", *prt_y);
	printf ("Valor onde ptr3 aponta = %d \n", *prt_z);
	printf ("Valor onde ptr4 aponta = %d \n", *prt_N);
	printf ("Valor onde ptr N aponta = %d \n", *prt_tc);
	printf ("---------------------------------------\n");
	
	printf ("End. Mem. onde ptr1 aponta = %p \n", &*prt_x);
	printf ("End. Mem. onde ptr1 aponta = %p \n", &*prt_y);
	printf ("End. Mem. onde ptr1 aponta = %p \n", &*prt_z);
	printf ("End. Mem. onde ptr1 aponta = %p \n", &*prt_N);
	printf ("End. Mem. onde ptr1 aponta = %p \n", &prt_tc);
	printf ("---------------------------------------\n\n");
	
	printf("Digite o nome do Usuario\n");
 	scanf (" %[^\n]", nome);
	
	tamanho = strlen(nome);
	
	printf ("%p\n", &nome);
	
	for (aow= 0; aow<tamanho; aow++){
		printf("O endereco de memoria da letra %c eh = %p\n", nome[aow], &nome[aow]);
	}
		return 0;
	
}
