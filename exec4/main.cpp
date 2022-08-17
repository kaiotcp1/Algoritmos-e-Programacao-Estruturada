#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	/* Elaborar um programa em que os clientes consigam ver
	os valores nutricionais de cada sorvete que gostariam
	de consumir. */
	

int main(int argc, char** argv) {
	
	int i;
	
	do{
		printf("\n Digite numero do sabor ! \n");
		
		printf("\t \n (1)... Flocos \n");
		printf("\t \n (2)... Morango \n");
		printf("\t \n (3)... Chocolate \n");
		
		scanf("%d", &i);
		
	} while((i < 1) || (i > 3));
	
	switch(i) {
		case 1:
			printf("\t\t\n Voce escolheu Flocos ");
			printf("\t\t\n Flocos contem 108.00 kcal ");
			break;
			
		case 2: 
			printf("\t\t\n Voce escolheu Morango ");
			printf("\t\t\n Morango contem 208.00 kcal ");
			break;
		
		case 3: 
			printf("\t\t\n Voce escolheu Chocolate ");
			printf("\t\t\n Chocolate contem 124.00 kcal ");
			break;
	}
	
	return 0;
}
