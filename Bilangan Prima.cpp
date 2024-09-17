#include <stdio.h>

int main() {
    int angka, bilPrima = 1;

    scanf("%d", &angka);

    if (angka <= 1) {
        bilPrima = 0;
    } else {
        for (int i = 2; i * i <= angka; i++) {
            if (angka % i == 0) {
                bilPrima = 0; 
                break;
            }
        }
    }

    if (bilPrima) {
        printf("PRIMA");
    } else {
        printf("BUKAN");
    }

    return 0;
}
