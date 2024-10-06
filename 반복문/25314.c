#include <stdio.h>
// long을 붙일 때마다 길어지는 4바이트씩 저장 공간이 늘어나는 int를 만들어보자.
// n은 4의 배수이며 n이 4개 늘어날 때마다 long이 하나씩 늘어난다.
int main(){
    int n;
    scanf("%d", &n);
    
    while(n>=4){
        printf("long ");
        n=n-4;
    }
    printf("int");

    return 0;
}