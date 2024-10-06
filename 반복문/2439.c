#include <stdio.h>
// n(5)를 입력하면
//     *
//    **
//   ***
//  ****
// *****
// 출력
int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        int nn=n;
        while(i!=nn){
            printf(" ");
            --nn;
        }
        int nnn=0;
        while(i!=nnn){
            printf("*");
            ++nnn;
        }
        printf("\n");
    }

    return 0;
}