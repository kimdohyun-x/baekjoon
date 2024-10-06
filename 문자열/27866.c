#include <stdio.h>
// 1줄에서 문자열 s을 입력하고 2줄에서 정수 x를 입력한다.
// 그럼 문자열에서 x번째 문자가 뭔지 출력한다.
int main(){
    char s[1000];
    int x;
    scanf("%s", &s);
    scanf("%d", &x);
    int i=0;

    for(int i=0; i<x; i++){
        if(s[i]==s[x-1]){
            printf("%c", s[i]);
            break;
        }
    }
    
    return 0;
}

// 문자와 문자열 둘다 char이라는 타입으로 선언하지만 형식지정자는 %c, %s로 다르다.