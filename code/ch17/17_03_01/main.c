#include <malloc.h>

void GetMyData(int *q) {
    q = (int *) malloc(8);  // 8바이트의 메모리를 동적 할당하여 포인터 q에 저장함
}

void main() {
    int *p;        // p는 초기화되지 않아서 쓰레기(유효하지 않은) 값을 저장함
    GetMyData(p);  // 함수를 호출하여 p에 8바이트 메모리를 할당함
    *p = 5;        // 오류 발생: 할당된 메모리의 첫 4바이트에 값 5를 넣음
    free(p);       // 동적으로 할당된 메모리를 해제함
}