#include <stdio.h>
#include <math.h>

int main () {

    int a, max_digit = 0;

    printf("Введите число:\n");
    scanf("%d", &a);

    // сделал для произвольного числа, на основе своего решения hw03/task5.c

    int k = 0;

    while(1) {
        if (a/pow(10, k) < 1 ) {
            // последний разряд был на прошлой итерации - выходим
            break;
        }

        int n = (int)(a / pow(10, k) ) % 10;


        max_digit = n > max_digit ? n : max_digit;

        k += 1;
    }

    printf("%d\n", max_digit);

    return 0;
}