#include <stdio.h>
//★A/B★
int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    if(a>0&&a<10&&b>0&&b<10){
        printf("%.10f", ((a*1.0)/(b*1.0)));
    }
    return 0;
}

/*
(a*1.0)/(b*1.0)보다 짧게 쓸 수 있다.
(double)a/b를 하면 된다.
*/