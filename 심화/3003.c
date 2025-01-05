#include <stdio.h>

int main(){
    int c[7]={1,1,2,2,2,8};
    int c2[7];

    scanf("%d %d %d %d %d %d", &c2[0], &c2[1], &c2[2], &c2[3], &c2[4], &c2[5]);
    
    for(int i=0; i<6; i++){
        if(c[i]==c2[i]){
            printf("0 ");
        }
        else if(c[i]>c2[i]){
            c2[i]=c[i]-c2[i];
            printf("%d ", c2[i]);
        }
        else{
            c2[i]=c[i]-c2[i];
            printf("%d ", c2[i]);
        }
    }

    return 0;
}