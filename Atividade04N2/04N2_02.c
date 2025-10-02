//Atividade 2


#include <stdio.h>

int main(void){

int num;
int verse = 0;

do {
printf("Digite um numero maior que 1 e menor que 200.\n");
scanf("%d",&num);
}while (num <= 1 || num >= 200);


for (int i=num; i>=0; i--){

printf("%3d %3d %3d\n",i*2,i,verse++);
}





















}










