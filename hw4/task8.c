#include <stdio.h>

int main() {
    int a, b, c, d, e, min;

    printf("Введите пять чисел:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    min = a < b ? a : b;
    min = min < c ? min : c;
    min = min < d ? min : d;
    min = min < e ? min : e;

    printf("%d\n", min);

    return 0;
}