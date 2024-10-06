#include <stdio.h>
// 정수 x를 입력하면 x회 만큼 입력을 받는다.
// 문자열을 입력하면 맨앞 글자와 맨뒷 글자를 출력한다.
int main(){
    int x;
    scanf("%d", &x);

    for(int i=0; i<x; i++){
        char s[999];
        scanf("%s", &s);
        int j=0;
        for(; s[j]!=0; j++){
        }
        printf("%c%c\n", s[0], s[j-1]);
    }

    return 0;
}