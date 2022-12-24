#include <stdio.h>

int ArrayToInteger(char string[]) {  // 문자열을 정수로 바꾸는 함수이다
    int count = 0, num = 0;

    // 문자열이 끝날 때까지 반복함
    while (string[count] != 0) {
        // 반복할 때마다 이전 값에 10을 곱해서 자릿수를 증가시킴
        num = num * 10 + string[count] - '0';
        count++;  // 다음 문자로 이동
    }

    return num;
}

void main() {
    int first_num, second_num;
    char first_string[16], second_string[16];

    printf("input first number :");
    gets(first_string);  // 첫 번째 문자열을 입력 받음
    printf("input second number :");
    gets(second_string);  // 두 번째 문자열을 입력 받음

    first_num = ArrayToInteger(first_string);  // 문자열 -> 정수
    second_num = ArrayToInteger(second_string);  // 문자열 -> 정수

    // 정수로 변환된 두 수를 합산한 결과 값을 출력함
    printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
}