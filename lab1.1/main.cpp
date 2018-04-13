#include <stdio.h>

void pasoPorValor(int i) {
    i = 20;
}
void pasoPorReferencia(int *i) {
    (*i) = -10;
}
int main() {
    int i;
    printf ("Introduce un numero: ");
    scanf ("%d", &i);
    pasoPorValor(i);
    printf ("Paso por valor: ");
    printf("%d\n", i);

    pasoPorReferencia(&i);
    printf ("Paso por Referencia: ");
    printf("%d\n", i);
    return 0;
}

