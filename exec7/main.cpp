#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* 
Foi solicitado a voc� automatizar o c�lculo de uma
rea��o chamada de prote��o. Nessa rea��o, um
compostos A, de massa 321,43g/mol ser� somado
a um composto B de massa 150,72 g/mol. Seu
programa, al�m de calcular o composto com base
nas informa��es do usu�rio, dever� tamb�m exibir
os valores de refer�ncia das combina��es: 
(1,2 : 1,0), (1,4 : 1,0), (1,0 : 1,6).
*/




float calcularMassa(float a, float b) {
	const float mA = 321.43;
	const float mB = 150.72;
	
	printf("\n 1,2 : 1,0 \t: = %f", (1,2*mA+1*mB));
	printf("\n 1,4 : 1,0 \t: = %f", (1,4*mA+1*mB));
	printf("\n 1,0 : 1,6 \t: = %f", (1*mA+1,6*mB));
	
	return (a * mA) + (b*mB);
};


int main(int argc, char** argv) {
	float a=0, b=0, resultado=0;
	
	printf("\n Digite as massas do elemento A: >>> \t");
	scanf("%f", &a);
	printf("\n Digite as massas do elemento B: >>> \t");
	scanf("%f", &b);
	
	resultado = calcularMassa(a, b);
	printf("\n Resultado de %.2f por %.2f e: %.3f", a, b, resultado);
		
	return 0;
}
