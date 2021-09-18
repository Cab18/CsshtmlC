#include<stdio.h>
#
int main (void){
	
	float tam=0;
	printf("Quantos alunos?\n");
	scanf("%f",&tam);
	
	float g1[3];
	float g2[3];
	float vetMedia[3];
	
	int i,j;
	
	for(i=0;i<tam;i++){
		printf("Vetor 1 - Digite as notas\n");
		scanf("%f",&g1[i]);
		
		printf("Vetor 2 - Digite a nota\n");
		scanf("%f",&g2[i]);
		
		vetMedia[j]=(g1[i]+g2[i])/2;
		
	}
	for(j=0;j<tam;j++){
		printf("%.2f",vetMedia[j]);
}
}
