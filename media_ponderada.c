//O que? calcular a média ponderada de 3 valores
//Como? med = ((v1*p1) + (v2*p2) + (v3*p3)) / (p1+p2+p3)
//Tenho -> p1=2 p2=3 p3=5
//Não tenho-> valores = notas

#include <stdio.h>
void main(){
//declaração das variaveis
float nota1,nota2,nota3,mediap;

//bloco de entrada
printf("Digite a primeira nota: ");
scanf("%f",&nota1);
printf("Digite a segunda nota: ");
scanf("%f",&nota2);
printf("Digite a terceira nota: ");
scanf("%f",&nota3);

//processamemto
mediap = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

//saida
printf("A media do aluno e: %f",mediap);

}

