#include <stdio.h>

int print_revers(int x);

int main() {
    int a;
    scanf("%d", &a);
    int res = print_revers(a);
    printf("res = %d", res);
    return 0;
}


void print_revers(int x) {
    int x1 = x / 100000;
    int x2 = (x / 10000) % 10;
    int x3 = (x / 1000) % 10;
    int x4 = (x / 100) % 10;
    int x5 = (x / 10) % 10;
    int x6 = x % 10;
    printf("x1 = %d x2 = %d x3 = %d x4 = %dx5 = %dx6 = %d\n", x1, x2, x3, x4, x5, x6);
    int res = x6 * 100000 + x5 * 10000 + x4 * 1000 + x3 * 100 + x2 * 10 + x1;
    printf("%d", res);
}