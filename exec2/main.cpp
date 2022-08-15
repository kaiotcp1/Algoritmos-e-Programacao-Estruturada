#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float nota1;
	float nota2;
	float media;
	
	printf("\n Digite sua primeira nota: ");
	scanf("%f", &nota1);
	
	printf("\n Digite sua segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	printf("\n Sua média é: %f", media);
	
	
	return 0;
}
