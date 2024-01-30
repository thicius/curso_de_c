#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void) {
        float f = 40.334309;
        double d = 1;

        printf("O tamanho de f (int)): %zu bytes / %zu bits\n", sizeof f, sizeof f *8);
        printf("O tamanho de d (double): %zu bytes / %zu bites\n", sizeof d, sizeof d*8);
        printf("Valor de f: %1.2f\n", f);

        return 0;
}
