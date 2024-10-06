#include <stdio.h>
//★첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력★
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", (a+b)%c);
    printf("%d\n", ((a%c)+(b%c))%c);
    printf("%d\n", (a*b)%c);
    printf("%d\n", ((a%c)*(b%c))%c);

    return 0;
}

/*5, 8, 4로 가정
2번째: 1<4이고, 1=(0×4)+1이므로 나머지는 1이다.
4번째: 0<4이고, 0=(0×4)+0이므로 나머지는 0이다.
*/