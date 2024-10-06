#include <stdio.h>
// 알파벳과 정수 0~9 중 하나를 입력하면 아스키 코드값으로 출력된다.
int main(){
    char a;
    scanf("%c", &a);
    printf("%d", a);
    return 0;
}

// 일단 문자열로 받은 다음에 정수형으로 출력하면 아스키코드가 출력된다.