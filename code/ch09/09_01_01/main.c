#include <stdio.h>

void main() {
    // 합한 값을 저장할 sum과 합산에 사용할 숫자를 저장할 num을 선언함
    int sum = 0, num;

    // 1에서 5까지 1씩 증가하면서 반복함
    for (num = 1; num <= 5; num++) {
        // 합산하기 전 sum값을 사용하여 'num + sum = '이라고 출력함
        printf("num(%d) + sum(%d) = ", num, sum);
        // sum에 num을 더함
        sum = sum + num;
        // 더한 후 sum 값을 출력하고 줄을 바꿈
        printf("%d\n", sum);
    }

    // 반복이 끝나면 줄을 바꾼 후 num 변수 값과 sum 변수 값을 출력함
    printf("\nResult : num = %d  sum = %d\n", num, sum);
}