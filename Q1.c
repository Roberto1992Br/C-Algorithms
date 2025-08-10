#include <stdio.h>
#include <locale.h>

int main(void){
int Idade;
int Nome[50];

setlocale(LC_ALL, "");

printf("Digite sua idade.");
scanf("%d",&Idade);

printf("Digite seu nome: ");
scanf("%s",&Nome);

printf("Seu nome é %s e você tem %d anos de idade.",Nome,Idade);


}
