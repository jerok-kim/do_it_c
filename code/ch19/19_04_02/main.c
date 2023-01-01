#include <stdio.h>

void main() {
    int num1, num2, num3;

    FILE *p_file = fopen("jerok.txt", "rt");  // 읽기 모드로 텍스트 파일을 오픈함

    if (NULL != p_file) {  // 파일 열기에 성공한 경우
        // num1에 412, num2에 100, num3에 123 값을 저장함
        fscanf(p_file, "%d %d %d", &num1, &num2, &num3);
        // 파일에서 읽은 값을 화면에 출력함
        printf("%d %d %d\n", num1, num2, num3);
        fclose(p_file);  // 파일을 닫음
    }
}