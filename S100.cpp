#include <stdio.h>

int main()
{
	int a, b, resultadoSoma;
	
	printf("Informe o primeiro valor:");
	scanf("%i", &a);
	
	printf("Informe o segundo valor:");
	scanf("%i", &b);
	
	resultadoSoma = (a + b);
	printf("O resultado da soma é: %i", resultadoSoma);
	
	return 0;
}
