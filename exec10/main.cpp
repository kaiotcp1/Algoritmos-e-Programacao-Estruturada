#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Calculo fatorial

int fatorial(int valor, int fact) {
	printf("\n Escreva um numero >>>");
	scanf("%d", &valor);
	
	printf("\n Digite valor referencia faltorial");
	scanf("%d", &fact);
	
	for(int i = fact; i >= valor; i--) {
		int conta =	valor * fact;
		
	}
}

int main(int argc, char** argv) {
	int valor, resultado, conta, fact;
	resultado = fatorial(valor, fact);
	printf("Fatorial: >>> %d", conta);
	
	
	return 0;
}
