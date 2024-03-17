#include <stdio.h>

int main() {

    int a,b;

    printf("Введите два числа:\n");
    scanf("%d %d", &a, &b);

    printf(
        "%d %d\n", 
        a > b ? b : a, 
        a > b ? a : b
    );

    return 0;
}
