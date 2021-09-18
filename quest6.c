#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<String.h>
/*6º Exercício

Crie um algoritmo que imprima o gênero de uma pessoa utilizando um dos caracteres(M ou F) como entrada.*/

int main(void){
	
	int a;
	
	printf("Digite seu genero,1=masculino e 2=Feminino: \n");
	scanf("%d",&a);
	
	switch(a){
	
	case 1:
			
		printf("Seu genero: Masculino\n");
	break;
	case 2: 

		printf("Seu genero: Feminino\n");
	break;
    default :
    	
    	printf("Ainda não conheco seu genero se identifique please\n");
break;
}
return 0;
}
