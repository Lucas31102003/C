#include <stdio.h>
#include <locale.h>

#define fixo 10;
int main()
{
	//Para Acentos
    setlocale(LC_ALL, "Portuguese");
    
    //Declara��o
    float preco, total;
    
    //Entrada de dados
    printf("Informe o valor do produto");
    scanf("%f", &preco);
    
    //Calculo
    total = preco + fixo;
    
    //Saida de dados
    printf("O total � R$ %.2f",total);
    
    return 0;

}
