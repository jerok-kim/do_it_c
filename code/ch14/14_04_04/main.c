#include <stdio.h>

void main() {
    int num = 0;

    // 정상적인 나이를 입력할 때까지 반복하기 위해 무한 반복을 사용함
    while (1) {
        printf("input age :");
        scanf("%d", &num);  // 한 개의 정수 값을 입력 받음

        // 0보다 크고 130 이하인 숫자만 정상적인 나이로 인정함
        if (num > 0 && num <= 130) {
            break;  // 정상적으로 입력되었기 때문에 반복문을 빠져나감
        } else {
            // 나이의 범위가 잘못 입력되었다고 알림
            printf("Incorrect Age!!\n");
        }
    }

    // 입력된 나이를 확인하기 위해 출력함
    printf("your age : %d\n", num);
}