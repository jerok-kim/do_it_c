#include <stdio.h>

void main() {
    int m, n;
    for (m = 5; m < 7; m++) {  // m은 5~6까지 2회 반복함
        for (n = 0; n < 3; n++) {  // n은 0~2까지 3회 반복함
            // m값이 5이고 n값이 1일 때 break문을 수행함
            if (5 == m && 1 == n) break;
            printf("m(%d) - n(%d)\n", m, n);
        }
    }
}