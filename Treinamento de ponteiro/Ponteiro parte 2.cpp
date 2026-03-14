#include <stdio.h>
#include <stdlib.h> 

int main(){
	char nome[] ="moreno";
	char *p,**pp;
	int idade=45, *i, **ii;
	p=nome;
	pp=&p;
	i=&idade;
	ii=&i;
	int x;
	
	printf ("Variavel nome                          %s\n", nome);
	printf ("Usando ponteiro                        %s\n", p);
	printf ("Usando ponteiro de ponteiro            %s\n\n", *pp); 
	
	printf("2o. caractere usando pp com [%c]\n", (*pp)[1]);
	printf("3o. caractere usando aritimetica de pp %c\n\n", *(*pp+2));

	printf ("Idade %d\n", idade);
	printf ("Usando Ponteiro %d\n", *i);
	printf ("Usando ponteiro de ponteiro %d\n\n", **ii);
	
	
	printf ("End. de nome                             %p\n", nome);
	printf ("End. de ponteiro de nome                 %p\n", &p);
	printf ("End. de ponteiro de ponteiro de nome     %p\n\n", &pp); 
	
	printf ("End. de idade                            %p\n", &idade);
	printf ("End. de ponteiro de idade                %p\n", &i);
	printf ("End. de ponteiro de ponteiro de idade    %p\n\n", &ii); 

	
	printf ("End. onde ponteiro de nome aponta        %p\n", &*p);
	printf ("End. ponteiro de ponteiro de nome aponta %p\n", &*i); 
	
	
	return 0;
}
