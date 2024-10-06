#include <stdio.h>
//★A + B + C★
int main(){
    long long a,b,c;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld", a+b+c);
    return 0;
}

/*
pow는 math 헤더파일에서 가져와야 한다.
pow(밑, 위)를 하면 밑의 위제곱이 된다.
*/