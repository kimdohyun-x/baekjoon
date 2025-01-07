#include <stdio.h>

int main() {
    int N, B;
    scanf("%d %d", &N, &B);

    char result[100]; // 결과를 저장할 배열
    int index = 0;    // 배열 인덱스

    // B진법으로 변환
    while (N > 0) {
        int remainder = N % B; // 나머지를 구함
        if (remainder < 10) {
            result[index++] = remainder + '0'; // 숫자(0~9)는 문자로 변환
        } else {
            result[index++] = remainder - 10 + 'A'; // 알파벳(A~Z)로 변환
        }
        N /= B; // N을 B로 나눈 몫으로 갱신
    }

    // 결과를 뒤집어서 출력
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }

    return 0;
}