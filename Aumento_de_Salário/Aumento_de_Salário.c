//Aumento de Salário

#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL,"");

char nome[50];
float salario,novo_salario,aumento;
int cargo;

printf("Digite seu Nome: ");
scanf("%s",&nome);

printf("Digite seu Cargo: ");
scanf("%d",&cargo);

printf("Digite seu salário: ");
scanf("%f",&salario);

if (cargo == 101){
aumento = (salario*0.10);
novo_salario = (salario+salario*0.10);
printf("Nome: %s\nSalário Antigo: %.2f\nSalário Novo: %.2f\nAumento: %.2f",nome,salario,novo_salario,aumento);
return 0;
}

if (cargo == 102 || cargo == 103){
aumento = (salario*0.20);
novo_salario = (salario+salario*0.20);
printf("Nome: %s\nSalário Antigo: %.2f\nSalário Novo: %.2f\nAumento: %.2f",nome,salario,novo_salario,aumento);
return 0;
}

if (cargo == 104){
aumento = (salario*0.30);
novo_salario = (salario+salario*0.30);
printf("Nome: %s\nSalário Antigo: %.2f\nSalário Novo: %.2f\nAumento: %.2f",nome,salario,novo_salario,aumento);
return 0;
}

printf("Cargo Inexistente.");
return 0;
}
