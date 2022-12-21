#include <stdio.h>

void main() {
    char data[12] = {0, 0, 2, 0, 1, 1, 0, 0, 2, 1, 0, 2};
    int i, x, y;

    for (i = 0; i < 12; i++) {
        x = i % 4 + 1;  // 열 번호를 구함
        y = i / 4 + 1;  // 행 번호를 구함
        printf("%d행 %d열에", y, x);
        if (1 == data[i]) printf(" 검은 돌이 놓여 있습니다.\n");
        else if (2 == data[i]) printf(" 흰 돌이 놓여 있습니다.\n");
        else printf("는 돌이 놓여 있지 않습니다.\n");
    }
}