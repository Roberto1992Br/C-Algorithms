#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    int Num;

    printf("Digite um n�mero: ");
    scanf("%d", &Num);

    if ((Num % 3 == 0) && (Num % 5 == 0)) {
        printf("Divis�vel por 3 e 5.");
    } else if (Num % 5 == 0) {
        printf("Divis�vel por 5.");
    } else if (Num % 3 == 0) {
        printf("Divis�vel por 3.");
    } else {
        printf("N�o � divis�vel por 3 nem por 5.");
    }

    return 0;
}
