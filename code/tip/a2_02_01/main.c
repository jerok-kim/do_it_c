#include <stdio.h>

struct BitType {  // 구조체를 비트 단위의 정보를 다룰 수 있도록 선언함
    unsigned char bit_0: 1;
    unsigned char bit_1: 1;
    unsigned char bit_2: 1;
    unsigned char bit_3: 1;
    unsigned char bit_4: 1;
    unsigned char bit_5: 1;
    unsigned char bit_6: 1;
    unsigned char bit_7: 1;  // 최상위 비트
};

union BitData {  // 1바이트 크기의 자료형
    struct BitType bit_data;
    unsigned char byte_data;
};

void main() {
    union BitData temp;
    temp.byte_data = 0x63;

    printf("byte_data : %x\n", temp.byte_data);
    printf("bit_data : %d%d%d%d %d%d%d%d\n", temp.bit_data.bit_7, temp.bit_data.bit_6, temp.bit_data.bit_5,
           temp.bit_data.bit_4, temp.bit_data.bit_3, temp.bit_data.bit_2, temp.bit_data.bit_1, temp.bit_data.bit_0);
}