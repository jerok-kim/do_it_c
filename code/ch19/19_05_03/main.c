#include <stdio.h>

void main() {
    int data;

    FILE *p_file = fopen("jerok.dat", "rb");  // 읽기 모드로 바이너리 파일을 오픈함

    if (NULL != p_file) {  // 파일 열기에 성공한 경우

        /// 읽기 모드(r)로 파일을 열면 파일의 처음 위치부터 데이터를 읽을 수 있다.
        /// 파일의 첫 4바이트(int)만큼 읽어 와서 data의 시작 주소에 넣는다.
        fread(&data, sizeof(int), 1, p_file);
        fclose(p_file);  // 파일을 닫음
        printf("file data : %d(0x%08x)", data, data);  // 파일에서 읽은 값을 출력함
    }
}