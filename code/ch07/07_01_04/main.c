#include <stdio.h>

void main() {
    int data1 = 5, data2 = 3;  // 두 변수에 초기값을 5와 3으로 설정

    // OR 연산자
    int result1 = 0 || 1;

    // AND 연산자. 3 && -1 은 1 && 1과 같기 때문에 결과 값은 참
    int result2 = 3 && -1;

    // OR 연산자. data1 == 3은 거짓, data2 == 3은 참
    int result3 = data1 == 3 || data2 == 3;

    // AND 연산자. data1 == 3은 거짓, data2 == 3은 참
    int result4 = data1 == 3 && data2 == 3;

    // data1은 0이 아니라서 참. 참에 NOT 연산을 하면 거짓
    int result5 = !data1;

    // 관계 연산의 결과 값은 0 또는 1
    printf("result : %d, %d, %d, %d, %d\n", result1, result2, result3, result4, result5);
}