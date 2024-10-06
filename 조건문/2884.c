#include <stdio.h>
//입력 시간을 45분 앞당기는 알람
int main(){
    int h,m;
    scanf("%d %d", &h, &m);
    if(h==0&&m<45){
        h=24;
        m=m+60-45;
        h-=1;
    }
    else if(m<45){
        m=m+60-45;
        h-=1;
    }
    else{
        m-=45;
    }

    printf("%d %d", h, m);

    return 0;
}