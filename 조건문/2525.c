#include <stdio.h>
// 시작 시각과 소요 시간을 입력하면, 끝나는 시각 계산
// 소요 시간은 0~1000분
int main(){
    int h,m,c,ch,cm;
    scanf("%d %d", &h, &m);     // 시 분 입력
    scanf("%d", &c);        // 소요시간 입력
    ch=(c/60);      // 소요시간을 시로 표시
    cm=(c%60);      // 소요시간을 분으로 표시시

    if(c>=60){      // 소요 hour가 60보다 크거나 같을 때
        ch=c/60;
        cm=c%60;
        h+=ch;
    }
    m+=cm;

    if(m>=60){      // 소요 분이 60과 같거나 클 때 
        h=h+m/60;
        m=m%60;
    }
    
    if(h>=24){
            h-=24;
        }

    printf("%d %d", h,m);

    return 0;
}