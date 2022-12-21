#include <stdio.h>

void main() {
    char data[6] = {'h', 'a', 'p', 'p', 'y', 0};  // char data[6] = "happy"; 같은 표현임
    char ment[] = "C programming!";  // []안의 15를 생략해도 됨

    printf("%s\n", data);
    printf("%s\n", ment);
}
