#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    float a = 0.0;
    scanf("%f", &a);
    int b = (int)round(a);
    printf("%d", b);
    return 0;
}