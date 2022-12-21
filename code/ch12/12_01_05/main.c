#include <stdio.h>

void main() {
    // data 배열을 1~5 값으로 초기화함
    char data[5] = {1, 2, 3, 4, 5};
    // 합한 값을 저장할 result 변수를 0으로 초기화함
    int result = 0, i;

    // 배열의 각 요소 값을 result 변수에 합하는 과정을 다섯 번 반복함
    for (i = 0; i < 5; i++) {
        result = result + data[i];
    }

    // 합한 결과 값을 출력함
    printf("data 배열의 각 요소의 합은 %d입니다\n", result);
}