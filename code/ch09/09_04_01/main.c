#include <stdio.h>

void main() {
    int m, n;
    for (m = 5; m < 7; m++) {  // m은 5부터 6까지 총 2회 반복
        for (n = 0; n < 3; n++) {  // n은 0부터 2까지 총 3회 반복
            printf("m(%d) - n(%d)\n", m, n);
        }
    }
}