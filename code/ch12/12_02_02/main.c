#include <stdio.h>

int GetStringLength(char data[]) {
    int count = 0;
    // 0이 나올 때까지 문자의 개수를 더함
    while (data[count]) count++;  // while (data[count] != 0) count++; 와 같은 뜻임
    // 문자열의 길이를 반환함
    return count;
}

void main() {
    int data_length;  // 문자열 길이를 저장할 변수
    char data[10] = {'h', 'a', 'p', 'p', 'y', 0,};  // "happy" 문자열을 저장함
    // data 변수에 들어 있는 문자열의 길이를 구함
    data_length = GetStringLength(data);
    // 문자열의 길이(문자 개수)를 출력함
    printf("data length = %d\n", data_length);
}