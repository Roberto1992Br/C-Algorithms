//Atividade 3
#include <stdio.h>
#include <locale.h>

int main(void){

setlocale(LC_ALL,"");

int num[4];
int soma = 0;

for (int i=0; i<=4; i++){
printf("Digite um numero.\n");
scanf("%d",&num[i]);
soma += num[i];
}
printf("A soma de todos eles é: %d",soma);
























}










