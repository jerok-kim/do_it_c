#include <stdio.h>

void main() {
    int num1, num2, num3;
    scanf("%o %d %x", &num1, &num2, &num3);  // 8, 10, 16진수 값 입력 받음

    // 입력 받은 숫자 값을 10진수로 출력함
    printf("input : %d, %d, %d\n", num1, num2, num3);
}