//#include <stdio.h>
//
//void main() {
//    // 점수를 86점으로 설정함
//    int score = 86;
//
//    // 점수에 따른 등급을 저장할 변수를 선언함
//    char grade;
//
//    if (90 <= score) {                 // 90점 이상인 경우
//        grade = 'A';
//    } else {                           // 90점 보다 작은 경우
//        if (80 <= score) {             // 80점 이상이고 90점보다 작은 경우
//            grade = 'B';
//        } else {                       // 80점보다 작은 경우
//            if (70 <= score) {         // 70점 이상이고 80점보다 작은 경우
//                grade = 'C';
//            } else {                   // 70점보다 작은 경우
//                if (60 <= score) {     // 60점 이상이고 70점보다 작은 경우
//                    grade = 'D';
//                } else {               // 60점보다 작은 경우
//                    grade = 'F';
//                }
//            }
//        }
//    }
//
//    // 자신의 점수와 등급을 출력함
//    printf("당신의 점수는 %d점이고 등급은 %c입니다.\n", score, grade);
//}

//#include <stdio.h>
//
//void main() {
//    int score = 86;
//    char grade;
//
//    if (90 <= score) grade = 'A';               // 90점 이상
//    else {
//        if (80 <= score) grade = 'B';           // 80 <= score < 90
//        else {
//            if (70 <= score) grade = 'C';       // 70 <= score < 80
//            else {
//                if (60 <= score) grade = 'D';   // 60 <= score < 70
//                else grade = 'F';               // 60점보다 작은 경우
//            }
//        }
//    }
//
//    printf("당신의 점수는 %d점이고 등급은 %c입니다.\n", score, grade);
//}

#include <stdio.h>

void main() {
    int score = 86;
    char grade;

    if (90 <= score) grade = 'A';          // 90점 이상
    else if (80 <= score) grade = 'B';     // 80 <= score < 90
    else if (70 <= score) grade = 'C';     // 70 <= score < 80
    else if (60 <= score) grade = 'D';     // 60 <= score < 70
    else grade = 'F';                      // 60점보다 작은 경우
    printf("당신의 점수는 %d점이고 등급은 %c입니다.\n", score, grade);
}