#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<String.h>
#include<Math.h>
#include<time.h>
#include<locale.h> //biblioteca para setar idioma e caracter 
int main(void){
	setlocale(LC_ALL,"portuguese");
	//usar horario para gerar numeros aleatorios
	srand((unsigned)time(NULL)); //USAR O HORARIO PARA GERAR NUMEROS ALEATORIOS POIS TUDO PRECISA COMEÇAR POR ALGUM LUGAR DE BASE
	
	int n,i,ini,fim,aux;
	
	printf("Digite o numero inicial\n");
	scanf("%d",&ini);
	printf("digite o limite de numeros\n");
	scanf("%d",&fim);
	printf("Digite o tamanho do vetor\n");
	scanf("%d",&n);
	
	int vet[n];
	for(i=1;i<=n;i++){
		vet[i]= ini+ rand() % (fim-ini);
	}
	int j;
	for(i=1;i<n;i++){
	for(j=i+1;j<n;j++){
	if(vet[i]>vet[j]){
	aux=vet[i];
	vet[i]=vet[j];
	vet[j]=aux;
			}
		}
	}
	for(i=0;i<n;i++){
	printf("Numero %d\n\n\n\n",vet[i]);
	}
	system("pause");
}
