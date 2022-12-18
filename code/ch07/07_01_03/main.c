#include <stdio.h>

void main() {
    int data1 = 5, data2 = 3;      // 두 변수에 초기값을 5와 3으로 설정함

    // 관계 연산 테스트
    int result1 = data1 > 7;       // 5는 7보다 작으므로 거짓
    int result2 = data2 <= data1;  // 3은 5보다 작으므로 참
    int result3 = data2 == 7;      // 3은 7과 같지 않으므로 거짓
    int result4 = data2 != data1;  // 3은 5와 다르므로 참

    // 관계 연산의 결과 값은 0 또는 1임
    printf("result : %d, %d, %d, %d\n", result1, result2, result3, result4);
}