//Atividade 3
//Exercicio 3
//Roberto Peres Coelho RA: 5171526

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void){

    setlocale(LC_ALL,"");

float latas,litros,m2;
int superficie,demaos;


do{
printf("Digite a quantidade de metros quadrados: ");
scanf("%f",&m2);
} while (m2 <= 0);

do{
printf("Digite a quantidade de demaos: ");
scanf("%d",&demaos);
} while (demaos <= 0);

do{
printf("Digite tipo de superficie: \n1 � Parede rebocada sem tinta pr�via.\n2 � Parede rebocada j� pintada anteriormente.\n3 � Parede emassada. ");
scanf("%d",&superficie);
} while (superficie < 1 || superficie > 3);

litros = superficie == 1?m2/8:
        superficie == 2?m2/6:m2/10;

        latas = litros/3.6*demaos;
latas = ceil(latas);

printf("O n�mero de latas de tinta necess�ria ser�: %.0f",latas);













return 0;
}




