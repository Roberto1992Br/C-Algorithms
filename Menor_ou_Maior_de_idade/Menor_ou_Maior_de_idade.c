//Menor ou Maior de idade

#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL,"");

char nome[50], cidade[50];
int idade;

printf("Digite seu Nome: ");
scanf("%s",&nome);

printf("Digite sua Cidade: ");
scanf("%s",&cidade);

printf("Digite sua idade: ");
scanf("%d",&idade);

if (idade < 18) {
printf("%s, nascido em %s, possui %d anos e é menor de idade.",nome,cidade,idade);
} else
{
printf("%s, nascido em %s, possui %d anos e é maior de idade.",nome,cidade,idade);
}

return 0;
}
