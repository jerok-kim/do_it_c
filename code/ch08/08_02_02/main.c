#include <stdio.h>

void main() {
    int score = 92;  // 명령문 1-1
    char grade;  // 명령문 1-2

    // score >= 90 비교 연산의 결과 값은 참이기 때문에 {}에 포함된 명령문들을 모두 수행함
    if (score >= 90) {
        grade = 'A'; // 명령문 2
        printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);  // 명령문 3
    }
    
    printf("작업 종료\n");  // 명령문 4
}