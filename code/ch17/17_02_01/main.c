#include <stdio.h>

void main() {
    short data = 3;
    short *p = &data;  // data 변수의 주소 값을 1차원 포인터 p에 저장함
    short **pp = &p;  // 1차원 포인터 p변수의 주소 값을 2차원 포인터 pp에 저장함

    printf("[Before  ] data : %d\n", data);  // 3을 출력함
    *p = 4;  // 1차원 포인터 p를 사용하여 data 변수 값을 4로 수정함
    printf("[Use *p  ] data : %d\n", data);
    **pp = 5;  // 2차원 포인터 pp를 사용하여 data 변수 값을 5로 수정함
    printf("[Use **pp] data : %d\n", data);
}