#include <stdio.h>

void main() {
    char temp[64];  // 파일에서 문자열을 입력 받을 배열 변수

    FILE *p_file = fopen("jerok.txt", "rt");  // 읽기 모드로 텍스트 파일 오픈함

    if (NULL != p_file) {  // 파일 열기에 성공한 경우
        while (EOF != fscanf(p_file, "%s", temp)) {  // temp는 &temp[0]과 같다
            // 파일에서 읽은 문자열을 화면에 출력함
            printf("%s\n", temp);
        }
        fclose(p_file);  // 파일을 닫음
    }
}