#include <stdio.h>
// 첫 번째: 반복 횟수 num 입력
// 두 번째: 숫자 n과 문자열 s 입력
// 출력: 0번째 배열부터 n개 출력하고 다음 다음
int main(){
    int num;
    scanf("%d", &num);

    for(int i=0; i<num; i++){       // num번 반복
        int n;
        char s[20];
        scanf("%d %s", &n, s);
        for(int j=0; s[j]!=0; j++){    // 문자열이 null일 때까지 반복
            for(int k=0; k<n; k++)
            printf("%c", s[j]);     // s[k]로 했어서 한 문자가 계속 나오지 않고 단어 전체가 나왔음
        }
        printf("\n");
    }

    return 0;
}