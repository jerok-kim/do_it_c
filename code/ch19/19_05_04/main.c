#include <stdio.h>

void main() {
    int file_size = 0;

    FILE *p_file = fopen("jerok.dat", "rb");  // 읽기 모드로 바이너리 파일을 오픈함

    if (NULL != p_file) {  // 파일 열기에 성공한 경우 
        fseek(p_file, 0, SEEK_END);  // 파일의 끝을 이동함
        file_size = ftell(p_file);  // 현재 파일 위치로 파일의 크기를 구함
        printf("파일 크기: %d\n", file_size);
        fclose(p_file);  // 파일을 닫음
    }
}