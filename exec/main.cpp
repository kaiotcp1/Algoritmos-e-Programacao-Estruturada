#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char nome[30];
	char endereco[30];
	int idade ;
	printf("Digite seu nome \n");
	scanf("%s", &nome);
	
	printf("Digite seu Endereco \n");
	scanf("%s", &endereco);
	
	printf("Digite sua idade \n");
	scanf("%d", &idade);
	
	printf("\n Nome: %s", nome);
	printf("\n endreco: %s", endereco);
	printf("\n idade: %d", idade);
	
	
	return 0;
}
