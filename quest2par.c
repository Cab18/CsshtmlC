#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*Uma loja fornece 10% de desconto para funcion�rios e 5% de desconto para clientes vips.
 Fa�a um programa que calcule o valor total a ser pago por uma pessoa.
 O programa dever� ler o valor total da compra efetuada e um c�digo que identifique se o comprador � um cliente comum (1), funcion�rio (2) ou vip (3).*/

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
