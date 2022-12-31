#include <stdio.h>

#define MAX_COUNT 5  // 친구 등록 가능한 최대 수

typedef struct People {
    char name[14];           // 이름
    unsigned short int age;  // 나이
    float height;            // 키
    float weight;            // 몸무게
} Person;

int AddFriend(Person *p_friend, int count) {
    /// AddFriend는 친구를 추가하는 함수로 성공하면 1을 반환하고 실패하면 0을 반환한다.
    /// main 함수에서 friends 배열의 시작 주소를 포인터로 받아서 사용한다.
    /// count는 현재까지 입력된 친구의 수를 기억하는 변수이다.

    if (count < MAX_COUNT) {  // 입력 가능한 최대 수를 넘었는지를 확인함
        p_friend = p_friend + count;  // friends 배열의 count 위치로 이동함
        printf("\n새로운 친구 정보를 입력하세요\n");
        printf("1. 이름 :");
        scanf("%s", p_friend->name);  // 구조체의 name 요소에 입력함
        printf("2. 나이 :");
        scanf("%hu", &p_friend->age);  // 구조체의 age 요소에 입력함
        printf("3. 키 :");
        scanf("%f", &p_friend->height);  // 구조체의 height 요소에 입력함
        printf("4. 몸무게 :");
        scanf("%f", &p_friend->weight);  // 구조체의 weight 요소에 입력함
        printf("입력을 완료했습니다.\n\n");
        return 1;
    } else {
        // 입력 가능한 최대 수를 넘었을 때 오류 상태를 출력함
        printf("최대 인원을 초과하여 입력을 할 수 없습니다.\n");
        printf("최대 %d명까지만 관리 가능합니다.\n\n", MAX_COUNT);
    }
    return 0;  // 친구 추가 실패
}

void ShowFriendList(Person *p_friend, int count) {
    /// ShowFriendList는 등록된 친구를 출력하는 함수로 main 함수에서 friends 배열의 시작 주소를 포인터로 받아서 사용한다.
    /// count는 현재까지 입력된 친구의 수를 기억하는 변수이다.

    int i;
    if (count > 0) {  // 등록된 친구가 있으면 그 수만큼 반복하면서 친구 정보를 출력함
        printf("\n등록된 친구 목록\n");
        printf("=======================================\n");
        for (i = 0; i < count; i++) {
            printf("%-14s, %3d, %6.2f, %6.2f\n", p_friend->name, p_friend->age, p_friend->height, p_friend->weight);
            p_friend++;  // 다음 위치에 있는 친구 정보로 주소를 이동함
        }
        printf("=======================================\n\n");
    } else {  // 등록된 친구가 없으면 오류를 출력함
        printf("\n등록된 친구가 없습니다.\n\n");
    }
}

void main() {
    Person friends[MAX_COUNT];  // 친구 정보를 저장할 배열
    int count = 0, num;  // count: 등록된 친구 수

    while (1) {  // 무한 루프: 사용자가 3을 누르면 break문으로 종료시킴
        // 메뉴를 화면에 출력함
        printf("     [ 메뉴 ]     \n");
        printf("=================\n");
        printf("1. 친구 추가       \n");
        printf("2. 친구 목록 보기   \n");
        printf("3. 종료           \n");
        printf("=================\n");
        printf("번호 선택 :");
        scanf("%d", &num);  // 사용자에게 번호를 입력 받음
        if (num == 1) {  // 1번: 친구 추가를 선택한 경우
            if (1 == AddFriend(friends, count)) count++;
            /// AddFriend 함수가 1을 반환하면 정상적으로 친구 정보가 추가된 것이다.
            /// 따라서 1을 반환했을 때만 등록된 친구 수를 증가시킨다.
            /// friends 배열이 주소를 넘겨준다.
        } else if (num == 2) {  // 2번: 친구 목록 보기를 선택한 경우
            // friends 배열의 주소를 인수로 넘겨줌
            ShowFriendList(friends, count);
        } else if (num == 3) {  // 3번: 반복문을 빠져나가 종료함
            break;
        } else {
            // 번호가 유효하지 않은 경우에 오류를 출력함
            printf("1~3 번호만 선택할 수 있습니다!!\n\n");
        }
    }
}