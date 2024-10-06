#include <stdio.h>
// 알파벳으로만 이루어진 문자열을 입력 받으면 몇 글자인지 출력
int main(){
    char s[100];
    scanf("%s", &s);
    int i=0;

    for(; s[i]!=0; i++){}
    printf("%d", i);

    return 0;
}