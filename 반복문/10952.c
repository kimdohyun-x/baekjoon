#include <stdio.h>
// a+b를 출력한다. a와 b가 둘다 0이면 종료
int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    while(a!=0||b!=0){
        printf("%d\n", a+b);
        scanf("%d %d", &a, &b);
    }

    return 0;
}