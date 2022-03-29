#include <stdio.h>
#include <locale.h>
int main() 
{
	//Para acentos
    setlocale(LC_ALL, "Portuguese");
    
    //Declaração de variáveis
    int a;
    int b;
    
    
    printf("Digite o primeiro valor \n");
    scanf("%d", &a);
    
    
    printf("\n Digite o segundo valor \n");
    scanf("%d", &b);
    
    
    float resultado = (a+b);
    
    printf("O resultado é %.2f" , resultado);


    
    return 0;
}
