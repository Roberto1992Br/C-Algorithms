#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    int Num;

    printf("Digite um número: ");
    scanf("%d", &Num);

    if ((Num % 3 == 0) && (Num % 5 == 0)) {
        printf("Divisível por 3 e 5.");
    } else if (Num % 5 == 0) {
        printf("Divisível por 5.");
    } else if (Num % 3 == 0) {
        printf("Divisível por 3.");
    } else {
        printf("Não é divisível por 3 nem por 5.");
    }

    return 0;
}
