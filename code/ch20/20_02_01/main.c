#include <stdio.h>

int Sum(int a, int b) { return a + b; }

int Sub(int a, int b) { return a - b; }

int Mul(int a, int b) { return a * b; }

int Div(int a, int b) { return a / b; }

void main() {
    int (*p[4])(int, int) = {&Sum, &Sub, &Mul, &Div}, i;
    char op_table[4] = {'+', '-', '*', '/'};

    // Sum, Sub, Mul, Div 순으로 호출함
    for (i = 0; i < 4; i++) printf("%d %c %d = %d\n", 8, op_table[i], 2, (*p[i])(8, 2));
}