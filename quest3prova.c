#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main (void){
	
	int a,b,c;
	
	printf("Digite um valor\n");
	scanf("%d",&a);
	
	printf("Digite um valor\n");
	scanf("%d",&b);
	
	printf("Digite um valor\n");
	scanf("%d",&c);
	
	if(b<a || a<c){
		printf("%d,%d,%d",b,a,c);
		break;
	}
	else if (a<b || b<c){
		printf("%d,%d,%d",a,b,c);
		break;
	}
	if(c<a || a<b){
		printf("%d,%d,%d",c,a,b);
	}
	}
