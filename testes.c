#include<stdio.h>
#include<math.h>
#include<String.h>
int main(void){
	
	float n,m,a,b;
	
	printf("Digite a primeira nota\n");
	scanf("%f",&a);
	printf("Digite a segunda nota\n");
	scanf("%f",&b);
	printf("Digite a terceira nota\n");
	scanf("%f",&n);
	
	m=(a+b+n)/3;
	
	printf("Olha sua media ai: %f",m);
	
}
