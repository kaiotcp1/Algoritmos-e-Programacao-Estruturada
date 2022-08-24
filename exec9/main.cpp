#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Faça um programa que receba dois números inteiros e gere os números inteiros que estão no intervalo compreendido por eles.



int numerosInteiros(int n1, int n2) {
	printf("\n Digite o primeiro Numero:>>>");
	scanf("%d", &n1);
	
	printf("\n Digite o segundo Numero:>>>");
	scanf("%d", &n2);
	
	for(int i = n1; i < n2; i++) {
		printf("\n %d", i);
	}
	return 0;
}


int main(int argc, char** argv) {
	int resultado, n1, n2;
	resultado = numerosInteiros(n1, n2);
	printf("\n %d", resultado);
	
	return 0;
}
