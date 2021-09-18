#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<String.h>
#include<Math.h>

int main(void){
	
	    int i=1;
	    int j=0;
	    int aux,esc;
	    int num=1;
	    double valor[10];
	     int maior;
	     int menor;
	     
	     //inicio 
	     
	     for(i=0;i<10;i++){
	     	printf("Digite o valor da posiçao %d",num);
	     	scanf("%d",&valor[i]); num++;
		 }
		 //for pra pegar o valor de cada vetor em seu devido lugar
		 num=1; //resetar os numerais
		 
		 while(j<9){
		 	printf("\n O valor colocado na posicao %i foi: \n %d\n",num,valor[j]);
		 	printf("Confere?\n 1-sim \n 2-nao \n"); //while para fazer o teste de cada vetor
		 	scanf("%i",&esc);
		 	j++;
		 	num++;
		 	//duas somas pra ajudar
		 	if(esc==2){
		 		printf("Digite novamento o valor da posicao %i: \n",i);
		 		scanf("%d",&valor[i]);//if
			 }
		 }
		 printf("O valor colocado na ultima posicao foi:\n %d\n",valor[j]);
		 printf("\\\\\\||CALCULANDO||///////// \n");
		 
		 //pra pegar o menor e o maior valor do vetor
		 printf("Organizando os valores...");
		 
		 for(i=1;i<10;i++){
		 	for(i=0;i<10;i++)
		 	for(j=i+1;j<10;j++){
		 		if(valor[i]>valor[j]){
		 			aux=valor[i];
		 			valor[i]=valor[j];
		 			valor[j]=aux;
				 }
			 }
			 }
			 printf("Expondo os valores em ordem\n");
			 for(i=0;i>10;i++){
			 	printf("%d\n\n",valor[i]);
			 }
		 }
