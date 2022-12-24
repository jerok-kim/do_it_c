#include <stdio.h>

void main() {
    int data = 0x12345678, i;
    char *p = (char *) &data;
    // &data는 int *형. 그런데 이 주소를 저장할 포인터 p가 char *라서
    // 자료형이 맞지 않아 (char *) 형 변환을 사용한다.

    // 4바이트 데이터를 바이트 단위로 값을 출력하기 위해 4번 반복함
    for (i = 0; i < 4; i++) {
        // p는 char *형이라서 시작 주소부터 1바이트 크기만 사용함
        printf("%X, ", *p);
        p++;  // p가 char *형이라서 1바이트 뒤에 있는 주소로 값이 변경됨
    }
}