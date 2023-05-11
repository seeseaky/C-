#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    char a = 'a';
    scanf("%c", &a);
    printf("  %c  \n %c%c%c \n%c%c%c%c%c\n %c%c%C \n  %c  ", a, a, a, a, a, a, a, a, a, a, a, a, a);
    return 0;
}