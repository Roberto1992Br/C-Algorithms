#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    int Num1,Num2;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &Num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &Num2);

    if (Num1 > Num2){
    printf("O n�mero %d � maior.",Num1);
    printf("\nE n�mero %d � menor.",Num2);
    }

    if (Num2 > Num1){
    printf("O n�mero %d � maior.",Num2);
    printf("\nE n�mero %d � menor.",Num1);
    }

    if (Num1 == Num2){
    printf("Os n�mero %d e %d s�o iguais.",Num1,Num2);
    }



    return 0;
}
