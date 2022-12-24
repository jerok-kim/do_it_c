#include <stdio.h>

// temp 변수를 이용하여 a와 b의 값을 서로 바꾸는 함수
void Swap(int a, int b) {
    int temp = a;  // a = 96, b = 5
    a = b;         // a = 5, b = 5
    b = temp;      // a = 5, b = 96
}

void main() {
    int start = 96, end = 5;

    printf("before : start = %d, end = %d\n", start, end);
    if (start > end) {
        Swap(start, end);  // start와 end의 값을 바꾸기 위해서 Swap 함수를 호출함
    }
    printf("after : start = %d, end = %d\n", start, end);
}