#include <stdio.h>

void main() {
    // pos_num은 각 자릿수에 곱할 숫자, num은 정수로 변환될 숫자를 저장할 변수
    int pos_num = 100, num = 0, i, temp_num;

    // 정수로 변환할 문자열
    char num_string[4] = "123";

    for (i = 0; i < 3; i++) {
        // 배열의 각 항목을 문자에서 정수로 변경함
        temp_num = num_string[i] - '0';

        // 정수화된 숫자에 자릿수에 해당하는 숫자를 곱해서 합산함
        num = num + temp_num * pos_num;

        // 다음 자릿수를 구성하기 위해 10을 나눔. 100 -> 10 -> 1
        pos_num = pos_num / 10;
    }

    // 변환될 정수 값을 %d를 사용해서 출력함
    printf("%s -> %d\n", num_string, num);
}