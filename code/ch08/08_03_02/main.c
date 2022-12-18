#include <stdio.h>

void main() {
    int score = 92;  // 명령문 1-1
    char grade;  // 명령문 1-2

    if (90 <= score) {
        grade = 'A';  // 명령문 2
        printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);  // 명령문 3
    } else {
        grade = 'B';  // 명령문 4
        printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);  // 명령문 5
    }

    printf("작업 종료\n");  // 명령문 6
}