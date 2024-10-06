#include <stdio.h>
// n을 입력하면 n의 개수 만큼 a+b 값을 출력한다.
int main(){
    int n, a, b;
    scanf("%d", &n);
    
    while(n>=1){
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
        --n;
    }

    return 0;
}