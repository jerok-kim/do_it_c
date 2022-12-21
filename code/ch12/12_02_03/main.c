#include <stdio.h>
#include <string.h>  // 문자열 표준 함수를 사용하기 위해 추가함

void main() {
    int data_length;  // 문자열 길이를 저장할 변수
    char data[10] = {'h', 'a', 'p', 'p', 'y', 0,};  // "happy" 문자열을 저장함
    // data 변수에 들어 있는 문자열의 길이를 구함
    data_length = strlen(data);
    // 문자열의 길이(문자 개수)를 출력함
    printf("data length = %d\n", data_length);
}