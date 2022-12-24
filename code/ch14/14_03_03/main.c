#include <stdio.h>

void main() {
    int num = 0, count = 0;
    char num_string[4] = "123";

    // 문자열이 끝날 때까지 반복함
    while (num_string[count] != 0) {
        num = num * 10 + (num_string[count] - '0');
        count++;  // 다음 문자로 이동함
    }

    printf("%s -> %d\n", num_string, num);
}