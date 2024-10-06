#include <stdio.h>
// a와 b를 입력하면 a+b를 출력한다. 단, 입력이 없을 시 종료된다.
int main(){
    int a,b;
    
    while(scanf("%d %d", &a, &b)==2){
        printf("%d\n", a+b);
    }

    return 0;
}

// 조건 자체에 scanf를 받아버리면 따로 조건문 안에 scanf를 해주지 않더라도 입력받는다.
// 루프 조건 자체가 입력을 처리하는 것이다.
// 또한, scanf("%d %d", &a, &b)==2의 뜻은 2개를 입력받아야 한다는 뜻이다.