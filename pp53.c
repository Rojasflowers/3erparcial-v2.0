#include <stdio.h>

float calcularMax(float x, float y) {
    float max;
    if (x >= y)
        max = x;
    else
        max = y;
    return max;
}

int main(void) {
    char c;
    do {
        float parcial1, parcial2, examen, final;
        printf("Introduzca nota parcial 1 [0,10]: ");
        scanf("%f", &parcial1);
        printf("Introduzca nota parcial 2 [0,10]: ");
        scanf("%f", &parcial2);
        printf("Introduzca nota examen final [0,10]: ");
        scanf("%f", &examen);
        final = calcularMax(parcial1 * 0.2 + parcial2 * 0.2 + examen * 0.6, examen);
        printf("Nota final: %f\n", final);
        printf("\n\nSalir? (s/n): ");
        do {
            scanf(" %c", &c);
        } while (c == '\n');
    } while (c != 's');

    return 0;
}
