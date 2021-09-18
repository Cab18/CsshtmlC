#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes vips.
 Faça um programa que calcule o valor total a ser pago por uma pessoa.
 O programa deverá ler o valor total da compra efetuada e um código que identifique se o comprador é um cliente comum (1), funcionário (2) ou vip (3).*/

int main ( void){
	
	int pessoa,s;
	
	float valtotal,compra,valor;
	
	printf("Bom dia! Digite o valor de tua compra :)\n");
	scanf("%f",&compra);
	
	printf("Identifique-se.\n\n 1- Option V.I.P, 2- Option Coworker/Funcionario, 3- Option Cliente comum\n\n");
	scanf("%d",&pessoa);
	
	switch(pessoa){	
	
	case 1: 
	
	if(pessoa==1){
		
		valor= compra*100/105;
		
		printf("O valor total de sua compra: %.1f",valor);
		
		break;
	}
	case 2:	
	
	if(pessoa==2){
	   
	  valor=compra*100/110;
	  
	  printf("O valor total de sua compra: %.1f",valor);
		
		break;
	}
	
	case 3: 
	
	if(pessoa==3){
	  
	  printf("O valor total de sua compra: %f",valor);
		
		break;
	}
	
	default: 
	
	printf("Optione invalida");

	break;

return 0;
}
}
