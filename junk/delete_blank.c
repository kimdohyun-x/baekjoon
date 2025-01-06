#include <stdio.h>
#include <string.h>

int main() {
    char s[1000]; // 입력 받을 배열 (최대 1000자)
    char result[1000]; // 결과를 저장할 배열
    int j = 0;

    printf("Enter the string (end input with Enter):\n");
    fgets(s, sizeof(s), stdin); // 사용자로부터 입력 받기

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != '\n') { // \n을 제외하고 저장
            result[j++] = s[i];
        }
    }
    result[j] = '\0'; // 문자열 끝 추가

    printf("Result: %s\n", result); // 결과 출력
    return 0;
}
