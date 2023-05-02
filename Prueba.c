#include <stdio.h>

int main () {
int number, suma=0, cont=0;

printf("Introduce un número entero: ");
    scanf("%d", &number);

    while (number != 0) {
        suma += number % 10;
        number /= 10;
        cont++;
    }

    printf("El número tiene %d dígitos y su suma es %d.\n", cont, suma);
}




