#include<stdio.h>
#include<math.h>
#include<String.h>
int main (void){
	
	int a,b,c;
	printf("Escreva um numero entre 5 a 10\n");
	scanf("%d",&a);
	
	switch(a){
		case 5:
			printf("Ohayo!");
			break;
			
			case 6:
				printf("hi there!");
				break;
				
				case 7:
					printf("Ola, como vais?");
					break;
					
					case 8:
						printf("She said konichiwa");
						break;
						
						case 9:
							printf("Yamete onee-chan");
							break;
							
							case 10:
								printf("Hai hai");
								break;
	}

	for(b=1;b<17;b++){
		printf("\n\n%d\n",b);
		}
}
