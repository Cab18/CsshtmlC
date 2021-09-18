#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main (void){
	
	 int v1,v2,op,result;
	 
	 printf("Qual operaçao quer fazer?\n 1-subtracao\n 2-adicao\n 3-divisao,\n 4- multiplicacao");
	 scanf("%d",&op);
	 
	 switch(op){
	 	case 1: 
	 		
	 		printf("Digite um valor :)\n");
	scanf("%d",&v1);
	
		printf("Digite um valor :)\n");
	scanf("%d",&v2);
	 
	      result=v1-v2;
	      
	      printf("O resultado e: %d",result);
	      
	      break;
		 
		 
		 case 2:
		 	
		 		printf("Digite um valor :)\n");
	scanf("%d",&v1);
	
		printf("Digite um valor :)\n");
	scanf("%d",&v2);
	 
	      result=v1+v2;
	      
	      printf("O resultado e: %d",result);
	      
	      break;
		  
	
	 
	 case 3:
		 		printf("Digite um valor :)\n");
	scanf("%d",&v1);
	
		printf("Digite um valor :)\n");
	scanf("%d",&v2);
	 
	      result=v1/v2;
	      
	      printf("O resultado e: %d",result);
	      
	      break;
	      
	      case 4 :
		 	
		 		printf("Digite um valor :)\n");
	scanf("%d",&v1);
	
		printf("Digite um valor :)\n");
	scanf("%d",&v2);
	 
	      result=v1*v2;
	      
	      printf("O resultado é: %d",result);
	      
	      break;
	
	default:
		
		printf("Operatione invalida escolha again :)");
		
	system("pause");
}
		
	 }

