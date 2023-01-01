#include <stdio.h>

void main() {
    int data = 100, data_list[5] = {0, 1, 2, 3, 4};

    FILE *p_file = fopen("jerok.dat", "wb");  // 쓰기 모드로 바이너리 파일을 오픈함

    if (NULL != p_file) {  // 파일 열기에 성공한 경우
        fwrite(&data, sizeof(int), 1, p_file);
        fwrite(data_list, sizeof(int), 5, p_file);
        fclose(p_file);  // 파일을 닫음
    }
}