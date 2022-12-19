#include <stdio.h>

int Sum(int data1, int data2) {  // 매개변수 data1, data2는 Sum 함수의 지역 변수
    // Sum 함수의 지역 변수 result를 선언한 후 data + data2 값으로 초기화함
    int result = data1 + data2;
    return result;
}

void main() {
    int result;  // main 함수의 지역 변수 result. 초기화되지 않아 어떤 값이 들어 있는지 모름
    result = Sum(5, 3);
    printf("5 + 3 = %d\n", result);
}