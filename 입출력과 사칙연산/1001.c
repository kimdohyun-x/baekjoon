#include <stdio.h>
//★A-B★
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if(0<a&&10>a&&b>0&&b<10){
    printf("%d", a-b);
    }
    return 0;
}

/*if(a,b>0&&a,b<10)과 같은 방식은 C언어에서 제대로 작동 안 한다. 
콤마 연산자로 해석되어 0<a가 먼저, 그 다음 b<10을 평가한다. 조건문이 필연적으로 길어진다.

*/