#include <stdio.h>

void main() {
    short birthday;
    short *ptr;  // 포인터 변수 선언함
    ptr = &birthday;  // birthday 변수의 주소를 ptr 변수에 대입함

    // %p 형식은 메모리 주소를 16진수 형식으로 출력함
    printf("birthday 변수의 주소는 %p, %08X, %16X입니다.\n", ptr, ptr, ptr);
}