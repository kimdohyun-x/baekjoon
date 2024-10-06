#include <stdio.h>
// 첫째 줄에 n을 입력하면 두번째 줄에서 공백을 두어 n개의 정수를 입력한다.
// 세 번째 줄에서 정수 a를 입력하면 배열에서 a가 몇 개인지 출력한다.
int main(){
    int n, a, arr[100], sum=0;
    scanf("%d", &n);

    for(int i=0; i<=n-1; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &a);
    for(int i=0; i<=n-1; i++){
        if(arr[i]==a){
            sum+=1;
        }
    }
    printf("%d", sum);

    return 0;
}