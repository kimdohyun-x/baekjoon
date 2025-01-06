#include <stdio.h>

int main(){
    int count;              // 색종이 수
    int arr[100][100]={0};      // 도화지 크기

    scanf("%d", &count);

    for(int i=0; i<count; i++){
        int r,c;
        scanf("%d %d", &r, &c);

        for(int x=0; x<10; x++){
            for(int y=0; y<10; y++)
            arr[r+x][c+y]=1;
        }   
    }

    int sum=0;

    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(arr[i][j]==1)
            sum++;
        }
    }

    printf("%d", sum);

    return 0;
}