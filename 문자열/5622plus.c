#include <stdio.h>

int main() {
    char s[16];
    scanf("%s", s);
    
    int alpha[26]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};


    // 지금부터 문자열 알파벳 변환 작업~
    int sum=0;

    for(int i=0; s[i]!=0; i++){
        s[i]=s[i]-'A';      // 알파벳을 숫자로 변환
        s[i]=alpha[s[i]];   // 알파벳에 따른 소요 시간을 배열에 대입
        sum+=s[i];
    }

    printf("%d", sum);

    return 0;
}