#include <stdio.h>

void main() {
    double data = 3.141592;
    // 자릿수를 확인하기 위해 []문자를 사용함
    printf("[%f] [%.4f] [%8.4f] [%-8.4f]", data, data, data, data);
}