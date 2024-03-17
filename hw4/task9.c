#include <stdio.h>

int main() {
    int a, b, c;

    printf("Введите три числа:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && b < c)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}