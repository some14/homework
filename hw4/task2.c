#include <stdio.h>

int main() {

    int a, b, c, max;

    printf("Введите 3 числа:\n");
    scanf("%d %d %d", &a, &b, &c);

    max = a > b ? a : b;
    max = max > c ? max : c;

    printf("%d\n", max);


    return 0;
}