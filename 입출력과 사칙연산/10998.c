#include <stdio.h>
//★A×B★
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    
    if(a>0&&a<10&&b>0&&b<10){
        printf("%d", a*b);
    }
    return 0;
}