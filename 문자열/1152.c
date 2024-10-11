#include <stdio.h>
// 문자열을 입력 받으면 단어가 몇 개인지 출력한다.
// 맨 앞이나 맨 뒤에 공백이 올 수 있다. 연속으로는 올 수 없다.
int main(){
    char s[1000000];
    scanf("%[^\n]", s);
    int i=0, j=1;

    while(s[i]!=0){
        if(s[i]==32)
        ++j;
        ++i;
    }
    if(s[i-1]==32)      // 맨 뒤가 공백이면 j-1
    j-=1;

    if(s[0]==32)        // 맨 앞이 공백이어도 j-1
    j-=1;

    printf("%d", j);

    return 0;
}