#include <stdio.h>
// x(총액) 입력 후 n(물건 개수)를 입력하면 a(물건 가격)와 b(개수)를 n줄 만큼 입력한다.
// x가 sum(실제 총액)과 같으면 Yes, 아니면 No를 출력한다.
int main(){
    int x,n,a,b,sum=0;
    scanf("%d", &x);
    scanf("%d", &n);

    while(n>=1){
        scanf("%d %d", &a, &b);
        sum=sum+a*b;
        --n;
    }

    if(sum==x){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}