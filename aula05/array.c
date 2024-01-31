#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void) {
        unsigned char c[3];

        printf("O tamanho de c eh: %zu\n", sizeof c);
        printf("O tamanho de c eh: %zu\n", sizeof c / sizeof c[0]);

        c[0] = 'A';
        c[1] = 0x42;
        c[2] = 67;

        printf("O elemento 0 de c eh: %c\n", c[0]);
        printf("O elemento 0 de c eh: %c\n", c[1]);
        printf("O elemento 0 de c eh: %c\n", c[2]);
        
        printf("O endereco do array c em memoria: %p\n", c);
        printf("O endereco do array c em memoria: %p\n", &c);
        printf("O endereco do primeiro elemento do array c em memoria: %p\n", &c[0]);

        return 0;
}
