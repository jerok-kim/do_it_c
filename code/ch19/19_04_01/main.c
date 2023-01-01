#include <stdio.h>

void main() {
    FILE *p_file = fopen("jerok.txt", "wt");  // 쓰기 모드로 텍스트 파일을 오픈함
    if (NULL != p_file) {                          // 파일 열기에 성공한 경우
        fprintf(p_file, "Hello\n");  // 파일에 "Hello" 문자열을 쓰고 줄 바꿈을 함 
        fclose(p_file);                       // 파일을 닫음
    }
}