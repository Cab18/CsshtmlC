#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*A taxa de natalidade e a taxa de mortalidade s�o indicadores estat�sticos de fundamental import�ncia por ajudar a compreender aquilo que os especialistas chamam de din�mica populacional e a entender sua rela��o com vari�veis que influenciam o desenvolvimento, como qualidade de vida, migra��es,
 , fatores socioecon�micos e localiza��o.
  Sabendo disso, crie um programa que calcule os dois indicadores utilizando o comando switch.
Observa��o : A taxa de natalidade � calculada pela seguinte f�rmula: taxa de natalidade = (n�mero de crian�as nascidas x 1000) / n�mero de habitantes;
Enquanto que, a taxa de mortalidade = (n�meros de �bitos x 1000) /n�mero de habitantes.*/

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
		
		printf("A taxa de mortalidade da sua cidade �: %d\n",txmort);
	break;
	
	case 2: 
	
	printf("Digite o numero de criancas nascidas :)\n");
		scanf("%d",&criancas);
		
		printf("Digite o numero de habitantes:)\n");
		scanf("%d",&habtan);
		
		txnat=(criancas*1000)/habtan;
		
		printf("A taxa de natalidade da sua cidade �: %d",txnat);
		
		break;
		
		default:
			
			printf("Um ou dois somente obg :)\n");
			
		break;
	
	
}
return 0;
}

