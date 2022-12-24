#include <stdio.h>

void main() {
    int input_data = getchar();  // 한 개의 문자를 입력 받음
    rewind(stdin);  // 표준 입력 버퍼에 있는 모든 입력 값을 제거함
    printf("first input : %c\n", input_data);  // 입력 받은 문자를 출력함
    input_data = getchar();
    rewind(stdin);  // 표준 입력 버퍼에 있는 모든 입력 값을 제거함
    printf("second input : %c\n", input_data);  // 입력 받은 문자를 출력함
}