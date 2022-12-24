#include <stdio.h>
#include <stdlib.h>  // atoi 함수를 사용하기 위해 포함시킴

void main() {
    int first_num, second_num;
    char first_string[16], second_string[16];

    printf("input first number :");
    gets(first_string);  // 첫 번째 문자열을 입력 받음
    printf("input second number :");
    gets(second_string);  // 두 번째 문자열을 입력 받음

    first_num = atoi(first_string);  // 문자열 -> 정수
    second_num = atoi(second_string);  // 문자열 -> 정수

    // 정수로 변환된 두 수를 합산한 결과 값을 출력함
    printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
}