#include <stdio.h>

unsigned char ModifyBit(unsigned char dest_data, unsigned char bit_num, char value) {
    unsigned char mask;

    // 1바이트 변수라서 비트 이동은 0~7까지만 가능
    if (bit_num < 8) {
        // bit_num번 비트에 값을 설정하는 데 사용할 숫자를 구성함
        mask = 0x01 << bit_num;

        if (1 == value) dest_data = dest_data | mask;  // 1로 설정하는 경우
        else dest_data = dest_data & ~mask;  // 0으로 설정하는 경우
    }

    // 변경된 값을 반환함
    return dest_data;
}

void main() {
    unsigned char lamp_state = 0x7F;  // 16진수 0x7F는 2진수 0111 1111
    printf("%X -> ", lamp_state);  // 변경 전 값을 출력함

    // lamp_state 변수의 3번 비트를 0으로 설정함
    lamp_state = ModifyBit(lamp_state, 3, 0);  // 16진수 0x77은 2진수 0111 0111
    printf("%X -> ", lamp_state);  // 변경 후 값을 출력함
    
    // lamp_state 변수의 3번 비트를 1로 설정함
    lamp_state = ModifyBit(lamp_state, 3, 1);  // 16진수 0x7F는 2진수 0111 1111
    printf("%X\n", lamp_state);  // 변경 후 값을 출력함
}