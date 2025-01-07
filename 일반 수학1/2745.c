#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char N[100]={0};
    int B;
    scanf("%s %d", N, &B);

    long long sum=0;
    int l = strlen(N);

    for(int i=0; i<l; i++){
        int value=0;

        if(N[i]>='0'&&N[i]<='9'){
            value=N[i]-'0';
        }
        else{
            value=N[i]-'A'+10;
        }
        sum+=value*pow(B, l-1-i);
    }

    printf("%lld", sum);

    return 0;
}