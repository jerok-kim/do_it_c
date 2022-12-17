#include <stdio.h>

int Sum(int value1, int value2) {
    int result = value1 + value2;
    return result;
}

void main() {
    int s;
    s = Sum(2, 3);
    printf("더하기 작업의 결과는 %d \n", s);
}