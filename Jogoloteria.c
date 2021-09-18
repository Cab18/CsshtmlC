#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int main(void){	
	int jogo[13],gabarito[13],numapost,pontos,i;
	for(i=0;i<13;i++){
	printf("informe o gabarito do %d",i,"o jogo:\n");
	scanf("%d",&gabarito[i]);
	
	while (gabarito[i]<1) ||(gabarito[i]>3){
		printf("Valor invalido. Reinforme o gabarito do %d jogo:\n",i);
		scanf("%d",gabarito[i]);
	}	}
	printf("Informe o numero do apostador:\n");
	scanf("%d",&numapost);
	
	for(i=0;i<13;i++){
		printf("Informe a aposta do %d jogo",i);
		scanf("%d",&jogo[i]);
		
		while (jogo[i]<1) or (jogo[i]>3)
		{
			printf("Valor invalido. Reinforme a aposta do %d jogo",i);
			scanf("%d",&jogo[i]);
		}
	}
	pontos=0;
	for(i=0;i<13;i++;)
	{
		if(gabarito[i]==jogo[i]){
			pontos +=1;
		}
	}
	printf("Numero do apostador: %d,pontos:%d",numapost,pontos);
	if(pontos==13);
	{
		printf("GANHADOR MISERE");
	}
}
}
