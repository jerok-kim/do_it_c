#include <stdio.h>

int result;  // 전역 변수로 특별한 초기화 값이 없으면 0으로 초기화된다

void Sum(int data1, int data2) {
    int result;  // 지역 변수로 초기화되어 있지 않다
    // 지역 변수의 우선순위가 높기 때문에 연산 결과 값은 전역 변수 result가 아닌 지역 변수 result에 저장된다
    result = data1 + data2;
}

void main() {
    Sum(5, 3);
    printf("5 + 3 = %d\n", result);
}