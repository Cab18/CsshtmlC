#include<stdio.h>
#include<String.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<math.h>
#include<stdio.h>

int func(){
	char esc;
	int i;
	double valor[10];
		if(esc='n'){	
		for(i=0;i<=10;i++)
		{
			printf("Digite novamente o valor da posicao: %d:\n",i);
			scanf("%d",&valor[i]);
		}}else{
	printf("Over");
}
}


int main(void)
{
	int i=0;	int j=0;	int aux;
	int esc;	double valor[10];
	
	for(i=0;i<=10;i++){
		printf("Digite o valor da posicao : %d",i);
		scanf("%d",&valor[i]);
	}
	for(j=0;j<=10;j++){
		printf("o valor colocado na posicao : %d foi :\n%d\n",j,valor[i]);
	}
    func();}
