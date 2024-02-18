#include <stdio.h>

int main(void)
{
    int a = 0, result = 1;
    scanf("%d", &a);
    a %= 1000;
    result *= a % 10;
    a /= 10;
    result *= a % 10;
    a /= 10;
    result *= a;
    printf("%d\n", result);
    return 0;
}