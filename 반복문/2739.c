#include <stdio.h>
// 숫자를 입력하면 9까지 곱하는 구구단 출력
int main(){
    int x;
    scanf("%d", &x);
    
    for(int i=1; i<10; i++){
        printf("%d * %d = %d\n", x, i, x*i);
    }

    return 0;
}