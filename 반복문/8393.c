#include <stdio.h>
//n이 주어졌을 때, 1부터 n까지의 합을 구하는 프로그램 작성(n은 1~10000)
int main(){
    int n, i;
    scanf("%d", &n);
    
    for(i=0; n>=1; n--){
        i+=n;
    }
    printf("%d", i);

    return 0;
}