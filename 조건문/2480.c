#include <stdio.h>
//주사위 3개 던져서 각 금액 나오게끔
// 같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
// 같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
// 모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if(a==b&&a==c){
        printf("%d", 10000+a*1000);
    }
    else if(a==b||a==c||b==c){
        if(b==c){
            a=b;
        }
        printf("%d", 1000+100*a);
    }
    else{
        int max=a;
        if(b>max){
            max=b;
        }
        if(c>max){
            max=c;
        }
        printf("%d", max*100);
    }
    return 0;
}

// 최댓값을 찾는 부분 논리를 잘 기억!!