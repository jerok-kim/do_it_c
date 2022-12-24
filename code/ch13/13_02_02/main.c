#include <stdio.h>

void main() {
    short birthday;
    short *ptr;
    ptr = &birthday;  // birthday 변수의 주소를 ptr 변수에 대입함
    *ptr = 0x0412;  // birthday = 0x0412;와 같은 결과

    printf("birthday = %d (0x%04X)\n", birthday, birthday);
}