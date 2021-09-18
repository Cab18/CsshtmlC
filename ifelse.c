#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(void){
	
	int dia=0;
	
	printf("Qual o dia? de 1 a 7 \n\n");
	scanf("%d",&dia);	
if(dia==1){
	printf("Domingo\n\n");
	
}else if(dia==2){
	printf("Segundafeira\n\n");
	
}else if(dia==3){
	printf("Tercafeira\n\n");
	
		}else if(dia==4){
	printf("quartafeira\n\n");
	
		}else if(dia==5){
	printf("quintafeira\n\n");
	
		}else if(dia==6){
	printf("Sextafeira\n\n");

}else if(dia==7){
	printf("Sabadofeira\n\n");
	
}else{
	printf("Nao identificado\n\n");
}
system("pause");

}

