#include <stdio.h>
// 시작 시각과 소요 시간을 입력하면, 끝나는 시각 계산
// 소요 시간은 0~1000분
int main(){
    int h,m,c,ch,cm;
    scanf("%d %d", &h, &m);
    scanf("%d", &c);
    ch=(c/60);
    cm=(c%60);
    
    if(c>=60){
        ch=c/60;
        cm=c%60;
        h+=ch;
    }
    m+=cm;

    if(m>=60){
        h=h+m/60;
        m=m%60;
    }
    
    if(h>=24){
            h-=24;
        }

    printf("%d %d", h,m);

    return 0;
}