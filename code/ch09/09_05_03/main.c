#include <stdio.h>

void main() {
    int m;
    for (m = 5; m < 8; m++) {  // m은 5~7까지 3회 반복함
        if (6 == m) continue;  // m값이 6일 때 continue문을 수행함
        printf("m(%d)\n", m);
    }
}