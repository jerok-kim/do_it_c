#include <stdio.h>

typedef struct People {
    char name[12];
    unsigned short int age;
    float height;
    float weight;
} Person;

void main() {
    Person data;  // person 자료형으로 data 변수를 선언함

    printf("대상자의 정보를 입력하세요\n");
    printf("이름 :");
    scanf("%s", data.name);  // 이름을 입력 받아 data 변수의 name 요소에 저장합니다
    printf("나이 :");
    scanf("%hu", &data.age);  // 나이를 입력 받아 data 변수의 age 요소에 저장합니다
    printf("키 :");
    scanf("%f", &data.height);  // 키를 입력 받아 data 변수의 height 요소에 저장합니다
    printf("몸무게 :");
    scanf("%f", &data.weight);  // 몸무게를 입력 받아 data 변수의 weight 요소에 저장합니다

    printf("\n입력한 정보는 다음과 같습니다.\n");

    // 키와 몸무게는 소수점 첫째 자리까지만 보여주기 위해 %.1f 형식으로 출력함
    printf("%s : %d세, %.1fcm, %.1fkg\n", data.name, data.age, data.height, data.weight);
}