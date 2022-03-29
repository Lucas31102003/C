#include <stdio.h>
#include <locale.h>

int main()
{
	//Para Acentos
    setlocale(LC_ALL, "Portuguese");
    
    //Declarar 2 variaveis
    int a = 10;
    int b = 20;
    int c = 50;
    
    //Comprar os valores e dizer quel é o maior
    if(a > b && a > c)
	{	
		printf("O valor da variavel A é maior %d" , a);
	}
	
	else if(b > a && b > c)
	{
		printf("O valor da variavel B é maior %d" , b);
	}
	
	else
	{
		printf ("O valor da variavel C é maior %d" , c);
	}

    

	return 0;
}
