#include <stdio.h>

void main() {
    int num = 0;

    // 정상적인 나이를 입력할 때까지 반복하기 위해 무한 반복을 사용함
    while (1) {
        printf("input age :");

        // scanf 함수는 실행에 실패하면 0을 반환함
        if (scanf("%d", &num) == 0) {
            rewind(stdin);  // 입력 버퍼를 모두 지움
            printf("[Enter] digit number!!\n");
        } else {
            // 0보다 크고 130이하인 숫자만 정상적인 나이로 인정함
            if (num > 0 && num <= 130) {
                break;  // 정상적으로 입력되었기 때문에 반복문을 빠져나감
            } else {
                // 나이의 범위가 잘못 입력되었다고 알림
                printf("Incorrect Age!!\n");
            }
        }
    }

    // 입력된 나이를 확인하기 위해 출력함
    printf("your age : %d\n", num);
}