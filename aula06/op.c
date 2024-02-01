#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void){

        int a;

        a = 4 + 3 * 2;

        printf("%d\n", a);
        // ++a acima, "a" seria incrementado antes de ser printado 
        // a++ acima, "a" a seria printado e depois incrementado
        return 0;
}
