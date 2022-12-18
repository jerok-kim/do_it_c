#include <stdio.h>

void main() {
    int sum = 0;
    int num = 1;

    // 1에서 5까지 1씩 증가시키면서 반복함
    while (num <= 5) {
        // 합산하기 전 sum 값을 사용하여 "num + sum = "이라고 출력함
        printf("num(%d) + sum(%d) = ", num, sum);
        // sum에 num을 합산함
        sum = sum + num;
        // 합산 후 sum 값을 출력하고 줄 바꿈을 함
        printf("%d\n", sum);
        // 다음 숫자를 더하기 위해서 숫자를 증가시킴
        num++;
    }
    
    printf("\nResult : num = %d  sum = %d\n", num, sum);
}