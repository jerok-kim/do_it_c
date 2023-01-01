#include <stdio.h>

void main() {
    char temp[64];  // 파일에서 문자열을 입력 받을 배열 변수

    FILE *p_file = fopen("jerok.txt", "rt");  // 읽기 모드로 텍스트 파일을 오픈함

    if (NULL != p_file) {  // 파일 열기에 성공한 경우

        /// fgets 함수의 두 번째 매개변수는 첫 번째 매개변수에 사용되는 메모리의 크기를 표기한다
        while (NULL != fgets(temp, sizeof(temp), p_file)) {

            /// 파일에서 읽은 문자열을 화면에 출력한다.
            /// fgets 함수는 fscanf 함수와 달리 줄의 끝에 있는 \n도 읽어서 temp 배열 마지막에 넣어 주기 때문에
            /// printf 함수를 사용할 때 \n을 적지 않는다.
            printf("%s", temp);
        }
        
        fclose(p_file);
    }
}