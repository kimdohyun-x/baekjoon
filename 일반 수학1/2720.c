#include <stdio.h>

int main(){
    int T;              // 테스트 케이스 수
    scanf("%d", &T);
    int C[T][4];        // 출력용 전체 거스름돈 T*4
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < 4; j++)
        C[i][j] = 0;
    }
    
    for(int i=0; i<T; i++){
        int cc;
        scanf("%d", &cc);   // 입력용 거스름돈 입력받기

        while(cc!=0){
            if(cc>=25){
            C[i][0]+=1;
            cc-=25;
            }
            else if(cc>=10){
                C[i][1]+=1;
                cc-=10;
            }
            else if(cc>=5){
                C[i][2]+=1;
                cc-=5;
            }
            else{
                C[i][3]+=1;
                cc-=1;
            }
        }
        
    }

    for(int i=0; i<T; i++){
        for(int j=0; j<4; j++)
        printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}