#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float dist(int x1, int y1, int x2, int y2);
float area(int x1, int y1, int x2, int y2, int x3, int y3);

int main() {
    int x1, y1, x2, y2, x3, y3;
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    float res = area(x1, y1, x2, y2, x3, y3);
    printf("%.3f", res);
    return 0;
}

float dist(int x1, int y1, int x2, int y2) {
    int a = abs(x1 - x2);
    int b = abs(y1 - y2);
    float c = sqrt(pow(a, 2) + pow(b,2));
    return c;
}

float area(int x1, int y1, int x2, int y2, int x3, int y3) {
    float a = dist(x1, y1, x2, y2);
    float b = dist(x2, y2, x3, y3);
    float c = dist(x1, y1, x3, y3);
    float p = (a + b + c)/2;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}