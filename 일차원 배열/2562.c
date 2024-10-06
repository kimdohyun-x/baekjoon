#include <stdio.h>

int main(){
    int n, arr[9], max=0, order;

    for(int i=0; i<9; i++){
        scanf("%d", &arr[i]);
        if(max<arr[i]){
            max=arr[i];
            order=i+1;
        }
    }

    printf("%d\n%d", max, order);

    return 0;
}