  #include<stdio.h>
#include<String.h>
#include<stdlib.h>
#include<conio.h>
//scanf não le espaços
int main (void){
	
	char senai[600];

	int i,tamanho;
	
    	 printf("Digite uma string:\n");
    	 fgets(senai,600,stdin);
    	 
    	 tamanho= strlen(senai);
    	 
    	 printf("A string invertida : \n");
    	 
    	 for(i=tamanho;i>=0;i--){
    	 	printf("%c",senai[i]);
		 }
    	
    	return 0;
}
