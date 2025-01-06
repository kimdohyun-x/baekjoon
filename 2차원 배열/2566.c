#include <stdio.h>

int main(){
    int arr[9][9];
    
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int max=arr[0][0], r=1, c=1;

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(max<arr[i][j]){
                max=arr[i][j];
                r=i+1, c=j+1;
            }
        }
    }

    printf("%d\n%d %d", max, r, c);

    return 0;
}