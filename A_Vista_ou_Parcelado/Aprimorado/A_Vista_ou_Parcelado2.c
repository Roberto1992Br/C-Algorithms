//A vista ou parcelado 2

#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL,"");

float total_gasto,resultado;
int escolha = 0;
int num_parcelas;


printf("Digite o total gasto: ");
scanf("%f",&total_gasto);

printf("Opções:\n1 - A vista com 10%% de desconto\n2 - Em duas vezes(Preço da etiqueta)\n3 - De 3 até 10 vezes com 3%% de juros ");
printf("\nDigite sua escolha: ");
scanf("%d",&escolha);

if (escolha == 1){
    resultado = (total_gasto-total_gasto*0.10);
    printf("Você deverá pagar: %.2f",resultado);
} else

if (escolha == 2){
    resultado = (total_gasto/2);
    printf("Você deverá pagar em 2 parcelas de: %.2f",resultado);
} else

if (escolha == 3 && total_gasto > 100){
    printf("\nDigite em quantas parcelas: ");
    scanf("%d",&num_parcelas);

    if ((num_parcelas >= 3) && (num_parcelas <= 10)){
    resultado = (total_gasto*0.03)+(total_gasto)/(num_parcelas);

    printf("Você deverá pagar em %d parcelas de: %.2f",num_parcelas,resultado);
    } else {
        printf("Número de parcelas invalido.");
    }

} else {
printf("Para parcelar de 3 a 10 vezes, apenas compras acima de R$ 100,00.");
}





return 0;
}
