#include <stdio.h>

unsigned char ResetBit(unsigned char dest_data, unsigned char bit_num) {
    // 1바이트 변수라서 비트 이동은 0~7까지 가능함
    if (bit_num < 8) dest_data = dest_data & ~(0x01 << bit_num);
    // 변경된 값을 반환함
    return dest_data;
}

void main() {
    unsigned char lamp_state = 0x7F;  // 16진수 0x7F는 2진수 0111 1111
    printf("%X -> ", lamp_state);  // 변경 전 값을 출력함
    // lamp_state 변수의 3번 비트를 0으로 설정함
    lamp_state = ResetBit(lamp_state, 3);  // 16진수 0x77은 2진수 0111 0111
    printf("%X\n", lamp_state);  // 변경 후 값을 출력함
}