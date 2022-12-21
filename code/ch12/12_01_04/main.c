#include <stdio.h>

void main() {
    short student[20] = {0,};  // 반복문 대신 쉼표를 사용해 배열의 모든 요소를 0으로 초기화한다.

    student[1] = 10;
    printf("%d %d\n", student[1], student[2]);
}