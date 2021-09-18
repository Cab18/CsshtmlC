#include<stdio.h>
#include<String.h>

void cabec(void){
	
	printf("\n\n\n\n\n\n");
	printf("*************************************************\n");
	printf("*AQUELA AULA LINDA- SENAI AGIOTAGENS.INC*\n");
	printf("*************************************************\n");
	printf("\n\n\n\n\n\n");
	
	return;
}

char nomeuser(){
	
char nm[30];
	printf("Qual o seu nome?\n");
	scanf("%s",&nm);
	
	printf("Ola %s\n",nm);
	return (nm);
}

int idade(){
	 
	 int i,d,a;
	 a=2021;
	 printf("\n\nDigite seu ano de nascimento\n");
	scanf("%d",&i);

	d=a-i;
	printf("\n\nEsse é a sua idade: %d\n",d);
	return(d);
}
 aw
int main (void){
	cabec();
	nomeuser();
	return 0;
}
