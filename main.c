#include <stdio.h>

void compararCadenas(char *cadena1, char *cadena2) {
    while (*cadena1 && (*cadena1 == *cadena2)) {
        cadena1++;
        cadena2++;
    }

    if (*cadena1 == *cadena2) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("las cadenas son diferentes\n");
    }
}

int main() {
    char cadena1[100];
    char cadena2[100];

    printf("Ingrese la primera cadena: ");
    scanf("%s", cadena1);

    printf("Ingrese la segunda cadena: ");
    scanf("%s", cadena2);

    compararCadenas(cadena1, cadena2);

    return 0;
}
