#include <stdio.h>
//★아이디를 입력하면 그 아이디 뒤에 ??!를 붙여 출력한다. 아이디는 알파벳 소문자로만 이루어져 있고, 50자를 넘지 않는다.★
int main(){
    char id[50];
    scanf("%s", &id);
    printf("%s??!", id);
    return 0;
}

/*
char id;를 하면 형식지정자도 %c이고 문자 딱 한 자만 받는다.
char id[50];와 같이 정의하고, 형식지정자는 %s로 해야 문자열을 받을 수 있다.
*/