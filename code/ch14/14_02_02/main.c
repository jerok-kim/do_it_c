#include <stdio.h>

void main() {
    int input_data;
    // 표준 입력 함수를 사용하여 문자를 한 개 입력 받음
    input_data = getchar();
    printf("first input : %c\n", input_data);  // 입력 받은 문자를 출력함
    input_data = getchar();
    printf("second input : %c\n", input_data);  // 입력 받은 문자를 출력함
}