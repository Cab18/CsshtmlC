#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(void){

int dia;
printf("Qual o dia? de 1 a 7\n");
scanf("%d",&dia);

switch(dia){
	
	case 1:
		printf("Domingo");
		break;
		
		case 2: 
		printf("Segunda-feira");
		break;
		
		case 3:
		 printf("Terca-feira");
		break;
		
			case 4: 
			printf("quarta-feira");
		break;
		
			case 5:
			 printf("quinta-feira");
		break;
		
		case 6: 
		printf("sexta-feira");
		break;
		
		case 7: 
		printf("Sabado");
		break;
		
		default:
		printf("Dia nulo digite novamente");
		return 0;
		}
}
