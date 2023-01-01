#include <stdio.h>

void main() {
    int num;
    
    FILE *p_file = fopen("jerok.txt", "rt");  // 읽기 모드로 텍스트 파일을 오픈함
    
    if(NULL != p_file) {  // 파일 열기에 성공한 경우
        /// 텍스트 파일의 끝은 EOF(End Of File) 문자로 구별하는데 fscanf 함수가 EOF 문자를 만나면 EOF값을 반환한다
        /// 따라서 EOF를 반환할 때까지 반복하면서 숫자 값을 읽어온다
        while(EOF != fscanf(p_file, "%d", &num)) {
            printf("%d\n", num);
        }
        fclose(p_file);
    }
}