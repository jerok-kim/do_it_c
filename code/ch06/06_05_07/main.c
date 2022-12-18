#include <stdio.h>

void main() {
    int data1 = 10;    // 10진수 -> 10진수로 10
    int data2 = 010;   // 8진수 -> 10진수로 8
    int data3 = 0x10;  // 16진수 -> 10진수로 16
    // data1은 16진수, data2는 10진수, data3은 8진수로 출력함
    printf("%x, %d, %o", data1, data2, data3);
}