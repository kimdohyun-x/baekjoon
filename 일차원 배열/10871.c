#include <stdio.h>
// 첫째줄: n개, 정수 x를 공백 두고 입력
// 둘째줄: n개 만큼 공백으로 입력
// 출력: x보다 작은 정수를 출력
int main(){
    int n, x, arr[10000];
    scanf("%d %d", &n, &x);
    
    for(int i=0; i<=n-1; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<=n-1; i++){
        if(x>arr[i])
        printf("%d ", arr[i]);
    }

    return 0;
}

// 참고! 이 코드 그대로 공백으로 구분하든 엔터키로 구분하든 상관 없다.