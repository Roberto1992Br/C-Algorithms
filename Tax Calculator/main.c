//Aplicativo que desconta 11% em imposto do salário.

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"");
    
int Days,Hours;
float Payment_B,Payment_L,Discount;

//Frontend Questions

printf("Digite o número de dias trabalhados: ");
scanf("%d",&Days);

printf("Digite quantas horas você trabalhou por dia: ");
scanf("%d",&Hours);

//Backend Maths

Payment_B = (Hours*Days);
Discount = (Payment_B*0.11);
Payment_L = (Payment_B-Discount);

printf("O seu salário bruto é de: R$ %.2f",Payment_B);
printf("\nO valor descontado de impostos é: R$ %.2f",Discount);
printf("\nO seu salário líquido é de: R$ %.2f",Payment_L);

}
