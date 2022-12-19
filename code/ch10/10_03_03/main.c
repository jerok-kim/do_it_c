#include <stdio.h>

unsigned char GetBit(unsigned char dest_data, unsigned char bit_num) {
    unsigned char bit_state = 0;

    // 1바이트 변수라서 비트 이동은 0~7까지만 가능함
    if (bit_num < 8) {
        bit_state = dest_data & (0x01 << bit_num);
        bit_state = bit_state >> bit_num;
    }

    // bit_num에 지정한 비트 값을 반환함
    return bit_state;
}

void main() {
    unsigned char lamp_state = 0x75;  // 16진수 0x75는 2진수로 0111 0101
    unsigned char bit_state;
    int i;

    printf("%X -> ", lamp_state);  // 16진법으로 현재 값을 출력함
    // 8개의 비트 값을 모두 출력하기 위해 8번 반복함
    for (i = 0; i < 8; i++) {
        // 비트를 표시할 때 최상위 비트(7번 비트)부터 순차적으로 보여주기 위해서 7, 6, 5, ... 순으로
        // 비트 값을 얻는다.
        bit_state = GetBit(lamp_state, 7 - i);
        // 비트 값을 출력함
        printf("%d", bit_state);
    }

    // 비트 값이 모두 출력되면 줄 바꿈을 함
    printf("\n");
}