#include <stdio.h>

int result;  // 전역 변수. 특별한 초기화 값이 없으면 0으로 초기화됨

void Sum(int data1, int data2) {
    result = data1 + data2;
}

void main() {
    Sum(5, 3);
    printf("5 + 3 = %d\n", result);
}