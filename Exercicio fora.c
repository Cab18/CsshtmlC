#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void){
	
	float kmph,miph;
	char line_text[50];
	
	printf("Input kilometers per hour: ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%f",&kmph);
	
	miph = (kmph * 0.6213712);
	printf("%f miles per hour\n", miph);
	return(0);
}
