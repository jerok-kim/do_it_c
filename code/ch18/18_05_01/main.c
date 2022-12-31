#include <stdio.h>
#include <malloc.h>  // malloc, free 함수를 사용하기 위해 추가함

typedef struct node {
    int number;           // 정수 값을 저장할 변수
    struct node *p_next;  // 다음 노드를 가리킬 포인터
} NODE;

/// 기존 연결 리스트에 노드가 없는 경우 이 함수로 전달된 p_head와 p_tail값을 수정해야 하므로
/// AddNumber를 호출할 때 p_head, p_tail 포인터 변수의 주소 값을 넘겨준다.
/// 따라서 1차원 포인터의 주소 값을 받아서 사용해야 하므로 두 개의 2차원 포인터를 사용한다.
void AddNumber(NODE **pp_head, NODE **pp_tail, int data) {

    /// AddNumber 함수를 호출할 때 전달 받은 p_head 포인터에 저장된 주소 값을 의미한다.
    /// 이 값이 NULL이면 기존 연결 리스트에 노드가 없다는 뜻이다.
    if (NULL != *pp_head) {

        /// *pp_tail 이라고 사용하면 AddNumber를 호출할 때 사용한 p_tail 포인터에 저장된 주소 값을 의미한다.
        /// 이 값은 마지막 노드의 주소이다.
        (*pp_tail)->p_next = (NODE *) malloc(sizeof(NODE));  // 새 노드를 할당함
        *pp_tail = (*pp_tail)->p_next;  // p_tail(*pp_tail)에 새 노드의 주소 값을 저장함
    } else {
        // p_head값이 NULL이라서 첫 노드가 추가됨. p_head값에 직접 대입함
        *pp_head = (NODE *) malloc(sizeof(NODE));  // 새 노드를 할당함
        *pp_tail = *pp_head;  // 새 노드의 주소 값을 p_tail(*pp_tail)에 저장함
    }

    (*pp_tail)->number = data;  // 새 노드의 number에 data값을 저장함
    (*pp_tail)->p_next = NULL;  // 다음 노드가 없음을 명시함
}

void main() {
    // 노드의 시작과 끝을 기억할 포인터
    NODE *p_head = NULL, *p_tail = NULL, *p;
    int sum = 0, temp;

    while (1) {  // 무한 루프: 중간에 9999를 누르면 종료함
        printf("숫자를 입력하세요(9999를 누르면 종료) :");
        scanf("%d", &temp);
        if (9999 == temp) break;  // 9999를 누르면 입력을 중단함

        // 노드의 시작과 끝을 기억하는 포인터의 주소 값과 입력된 숫자를 전달함
        AddNumber(&p_head, &p_tail, temp);
    }

    /// 입력된 숫자를 출력하기 위해서 노드를 탐색할 포인터에 시작 노드의 주소 값을 대입한다.
    /// p_head를 직접 사용하면 시작 노드의 위치를 잃어 버린다.
    p = p_head;
    while (NULL != p) {
        if (p != p_head) printf(" + ");  // 숫자와 숫자 사이에 +를 출력함
        printf(" %d ", p->number);  // 입력한 숫자를 출력함
        sum = sum + p->number;  // 입력한 숫자들을 합산함
        p = p->p_next;  // 다음 노드로 이동함
    }

    printf(" = %d\n", sum);  // 합산 값을 출력함

    while (NULL != p_head) {  // p_head 값이 NULL이 될 때까지 반복함
        p = p_head;  // 현재 노드를 삭제하기 위해 p 변수에 노드 주소 값을 저장함
        p_head = p_head->p_next;  // 시작 위치를 다음 노드로 옮김
        free(p);  // 기억했던 주소를 사용하여 노드를 삭제함
    }

    p_tail = p_head;  // 반복문을 나오면 p_head 값은 NULL. p_tail 값도 NULL로 변경함
}