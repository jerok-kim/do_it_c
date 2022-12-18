#include <stdio.h>

void main() {
    int sum = 0;
    int num = 1;  // 시작 조건
    for (;;) {  // 무한 루프를 만드는 for 반복문
        // 합산하기 전 sum 값을 사용하여 "num + sum = "이라고 출력함
        printf("num(%d) + sum(%d) = ", num, sum);
        // sum에 num을 합산함
        sum = sum + num;
        // 합산 후 sum 값을 출력하고 줄을 바꿈
        printf("%d\n", sum);
        num++;  // 조건 변화 수식
        if (num > 5) break;  // 종결 조건 num > 5가 참이면 반복문 종료
    }
    printf("\nResult : num = %d  sum = %d\n", num, sum);
}