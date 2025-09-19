//Atividade 3
//Exercicio 2
//Roberto Peres Coelho RA: 5171526

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void){

    setlocale(LC_ALL,"");

int n1,n2,n3,n4,menor;

printf("Digite o primeiro numero: ");
scanf("%d",&n1);

printf("Digite o segundo numero: ");
scanf("%d",&n2);

printf("Digite o terceiro numero: ");
scanf("%d",&n3);

printf("Digite o quarto numero: ");
scanf("%d",&n4);

menor = n1<n2 && n1<n3 && n1<n4?n1:
        n2<n1 && n2<n3 && n2<n4?n2:
        n3<n1 && n3<n2 && n3<n4?n3:
        n4<n1 && n4<n2 && n4<n3?n4:0;
/*
menor = n1<n2 && n1<n3 && n1<n4?n1:
        n2<n3 && n2<n4?n2:
        n3<n4?n3:
        n4;
*/

printf("O menor número digitado é: %d",menor);









return 0;
}




