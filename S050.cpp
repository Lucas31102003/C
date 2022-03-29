#include <stdio.h>
int main()
{
	float n,m,area;
	printf("Digite o valor do primeiro lado do quadrado");
	scanf("%f", &n);
	
	printf("Digite o valor do segundo lado do quadrado");
	scanf("%f", &m);
	
	area = (n*m);
	printf("O valor da área é: %f", area);
	
	return 0;
}



