#include <stdio.h>

int main(){
    int n,m,x,y,a;
    scanf("%d %d", &n, &m);
    int arr[n];
    
    for(int i=0; i<n; i++){         // 배열에 순서대로 집어넣어 주기
        arr[i]=i+1;
    }

    for(int i=0; i<m; i++){
        scanf("%d %d", &x, &y);
        for(int i=x-1, j=y-1, k=(y-x+1)/2; k>=1; i++, j--, k--){
            a=arr[i];           // 바뀐 배열에서 또 바꾸는 거임! 원래 배열 아님!! 그래도 혼자 풀었엉..^^
            arr[i]=arr[j];
            arr[j]=a;
        }
    }

    for(int i=0; i<n; i++)  printf("%d ", arr[i]);

    return 0;
}