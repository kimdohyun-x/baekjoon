#include <stdio.h>
//사분면 구하기
int main(){
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);

    if(x>0){
        if(y>0){
            printf("1");
        }
        else{
            printf("4");
        }
    }
    else{
        if(y>0){
            printf("2");
        }
        else{
            printf("3");
        }
    }

    return 0;
}

// 각 x, y가 양수, 음수인지에 따라 몇사분면인지 정해지는 게 tip!