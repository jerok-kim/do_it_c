#include <stdio.h>

void main() {
    int score = 86;
    char grade;

    // 등급을 결정하는 점수가 10단위로 달라지기 때문에 10으로 나눈 몫을 이용하면 특정 숫자와 비교하도록 변경할 수 있다.
    switch (score / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    printf("당신의 점수는 %d점이고 등급은 %c입니다.\n", score, grade);
}