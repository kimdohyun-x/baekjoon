#include <stdio.h>
// 입력받은 n 만큼 Case #x: A + B = C를 출력한다. 테스트 케이스 번호는 1부터 시작한다.
int main(){
    int n,a,b;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i, a,b,a+b);
    }

    return 0;
}