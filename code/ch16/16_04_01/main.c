#include <stdio.h>

#define MAX_COUNT 5  // 최대 입력을 5회로 제한함

void main() {
    int num[MAX_COUNT], count = 0, sum = 0, i;

    // 최대 5회까지 입력 받고 중간에 9999를 누르면 종료함
    while (count < MAX_COUNT) {
        printf("숫자를 입력하세요 (9999를 누르면 종료) :");
        scanf("%d", num + count);  // scanf("%d", &num[count]); 과 같은 표현
        if (num[count] == 9999) break;  // 9999를 누르면 입력 중단함
        count++;  // 입력된 횟수를 계산함
    }

    // 입력된 횟수만큼 숫자를 출력함
    for (i = 0; i < count; i++) {
        if (i > 0) printf(" + ");  // 숫자와 숫자 사이에 +를 출력함
        printf(" %d", num[i]);  // 입력한 숫자를 출력함
        sum = sum + num[i];  // 입력한 숫자들을 합산함
    }

    printf(" = %d\n", sum);  // 합산 값을 출력함
}