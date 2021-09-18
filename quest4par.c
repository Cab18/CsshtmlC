#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*A taxa de natalidade e a taxa de mortalidade são indicadores estatísticos de fundamental importância por ajudar a compreender aquilo que os especialistas chamam de dinâmica populacional e a entender sua relação com variáveis que influenciam o desenvolvimento, como qualidade de vida, migrações,
 , fatores socioeconômicos e localização.
  Sabendo disso, crie um programa que calcule os dois indicadores utilizando o comando switch.
Observação : A taxa de natalidade é calculada pela seguinte fórmula: taxa de natalidade = (número de crianças nascidas x 1000) / número de habitantes;
Enquanto que, a taxa de mortalidade = (números de óbitos x 1000) /número de habitantes.*/

int main (void){
	
	int op,txmort,txnat,obitouchihas,habtan,criancas;
	
	printf("Para saber a taxa de mortalidade digite 1\n\n Para saber a taxa de natalidade digite 2\n\n");
	scanf("%d",&op);
	
	switch(op){
		
		case 1:
			
		printf("Digite o numero de falecidos :(\n");
		scanf("%d",&obitouchihas);
		
		printf("Digite o numero de habitantes:)\n");
		scanf("%d",&habtan);
		
		txmort=(obitouchihas*1000)/habtan;
		
		printf("A taxa de mortalidade da sua cidade é: %d\n",txmort);
	break;
	
	case 2: 
	
	printf("Digite o numero de criancas nascidas :)\n");
		scanf("%d",&criancas);
		
		printf("Digite o numero de habitantes:)\n");
		scanf("%d",&habtan);
		
		txnat=(criancas*1000)/habtan;
		
		printf("A taxa de natalidade da sua cidade é: %d",txnat);
		
		break;
		
		default:
			
			printf("Um ou dois somente obg :)\n");
			
		break;
	
	
}
return 0;
}

