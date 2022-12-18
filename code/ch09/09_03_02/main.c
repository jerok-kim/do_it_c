//#include <stdio.h>
//
//void ShowMultiplication(int step) {
//    int i;
//
//    // i 변수가 1~9까지 1씩 증가하면서 총 9번 반복함
//    for (i = 1; i <= 9; i++) {
//        // step * i 형식으로 출력함
//        printf("%d * %d = %d\n", step, i, step * i);
//    }
//}
//
//void main() {
//    int m;
//
//    // 2단에서 9단까지 출력하도록 반복함
//    for (m = 2; m <= 9; m++) {
//        // 매개변수에 2~9 값을 전달하여 구구단을 출력함
//        ShowMultiplication(m);
//    }
//}

#include <stdio.h>

void ShowMultiplication(int step) {
    int i = 1;
    while (i <= 9) {
        printf("%d * %d = %d\n", step, i, step * i);
        i++;
    }
}

void main() {
    int m = 2;
    while (m <= 9) {
        ShowMultiplication(m);
        m++;
    }
}