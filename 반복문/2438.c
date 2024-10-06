#include <stdio.h>
// n을 입력하면 입력한 n줄 만큼 *이 출력되고, 각 줄마다 *의 개수가 커진다.
int main(){
    int n, nn=0;
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        while(i!=nn){
            printf("*");
            ++nn;
        }
        printf("\n");
        nn=0;
    }

    return 0;
}