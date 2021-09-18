#include<stdio.h>
#include<conio.h>
#include<String.h>

int main (void){
	
	int x,i,j;
	float maiorSalario,salario[3];
	
	for(j=0;j<=2;j++){
		printf("Informe o salario\n\n");
		scanf("%f",salario[j]);
		
		printf("%f\n",salario[j]);
	}
	for(i=0;i<=2;i++){
		for(x=0;x<=2;x++){
			if(salario[i]>salario[x]{
		     maiorSalario=salario[i];
		     printf("O maior salario: %f\n\n",maiorSalario);
			}		
		}
	}
}
