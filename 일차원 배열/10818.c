#include <stdio.h>
// 첫째 줄에 n을 입력
// 둘째 줄에 공백으로 n개의 정수 입력
// 출력: 최솟값 최댓값
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<=n-1; i++){
        scanf("%d", &arr[i]);
    }
    int max=arr[0], min=arr[0];
    for(int i=0; i<=n-1; i++){
        if(max<arr[i]) max=arr[i];
        if(min>arr[i]) min=arr[i];
    }
    printf("%d %d", min, max);

    return 0;
}