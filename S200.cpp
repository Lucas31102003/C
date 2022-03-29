#include <stdio.h>
int main()
{
	float v1, v2, area;
	
	printf("Digite o valor da base");
	scanf("%f", &v1);
	
	printf("Digite o valor da altura");
	scanf("%f", &v2);
	
	area = (v1 * v2)/2;
	printf("O resultado da área do triângulo é: %f", area);
}
