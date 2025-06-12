#include <stdio.h>

int main() {
    float peso, altura, imc;

    
    do {
        printf("Ingrese el peso en kg: ");
        scanf("%f", &peso);
        if (peso <= 0) {
            printf("Error: El peso debe ser un número positivo.\n");
        }
    } while (peso <= 0);

    
    do {
        printf("Ingrese la altura en metros: ");
        scanf("%f", &altura);
        if (altura <= 0) {
            printf("Error: La altura debe ser un número positivo.\n");
        }
    } while (altura <= 0);

    
    imc = peso / (altura * altura);

    
    printf("Su índice de masa corporal es: %.2f\n", imc);
    printf("Índice | Condición\n");
    printf("-----------------------------\n");
    printf("<18.5 | Bajo peso\n");
    printf("18.5 a 24.9 | Normal\n");
    printf("25.0 a 29.9 | Sobrepeso\n");
    printf(">=30 | Obesidad\n");

    
    printf("\nSegún su IMC (%.2f), su condición es: ", imc);
    if (imc < 18.5) {
        printf("Bajo peso\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Normal\n");
    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidad\n");
    }

    return 0;
}