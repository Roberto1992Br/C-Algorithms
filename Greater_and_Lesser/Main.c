#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    int Num1,Num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &Num1);

    printf("Digite o segundo número: ");
    scanf("%d", &Num2);

    if (Num1 > Num2){
    printf("O número %d é maior.",Num1);
    printf("\nE número %d é menor.",Num2);
    }

    if (Num2 > Num1){
    printf("O número %d é maior.",Num2);
    printf("\nE número %d é menor.",Num1);
    }

    if (Num1 == Num2){
    printf("Os número %d e %d são iguais.",Num1,Num2);
    }



    return 0;
}
