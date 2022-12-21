#include <stdio.h>
#include <string.h>  // 문자열 표준 함수를 사용하기 위해 추가함

void main() {
    char data[10] = {'a', 'b', 'c', 0,};  // "abc" 문자열을 저장함
    char result[16];  // 새로운 문자열을 저장할 변수

    strcpy(result, data);  // data에 저장된 문자열을 result로 복사함
    strcat(result, "def");  // result값의 맨 뒤에 "def"를 덧붙임

    printf("%s + \"def\" = %s\n", data, result);
}