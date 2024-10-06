#include <stdio.h>
// 입력한 n의 개수만큼 a와 b를 더해준다.
int main(){
    int n,a,b;
    scanf("%d", &n);
    
    while(n>=1){
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
        --n;
    }

    return 0;
}