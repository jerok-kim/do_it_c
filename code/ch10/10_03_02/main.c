#include <stdio.h>

unsigned char SetBit(unsigned char dest_data, unsigned char bit_num) {
    // 1바이트 변수라서 비트 이동은 0~7까지 가능함
    if (bit_num < 8) dest_data = dest_data | (0x01 << bit_num);
    // 변경된 값을 반환함
    return dest_data;
}

void main() {
    unsigned char lamp_state = 0x77;  // 0x77은 2진수로 0111 0111
    printf("%X -> ", lamp_state);  // 변경 전 값을 출력함
    // lamp_state 변수의 3번 비트를 1로 설정함
    lamp_state = SetBit(lamp_state, 3);
    // 변경 후 값을 출력함
    printf("%X\n", lamp_state);
}