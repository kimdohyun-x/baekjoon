#include <stdio.h>

int main() {
    char s[16], alpha[27]={0};
    scanf("%s", s);
    
    for(int i=1, j=0; j<15; i++, j+=3){
        alpha[j]=2+i;
        alpha[j+1]=2+i;
        alpha[j+2]=2+i;
    }

    alpha[15]=8;
    alpha[16]=8;
    alpha[17]=8;
    alpha[18]=8;

    alpha[19]=9;
    alpha[20]=9;
    alpha[21]=9;
    
    alpha[22]=10;
    alpha[23]=10;
    alpha[24]=10;
    alpha[25]=10;


    // 지금부터 문자열 알파벳 변환 작업~
    int sum=0;

    for(int i=0; s[i]!=0; i++){
        s[i]=s[i]-'A';      // 알파벳을 숫자로 변환
        s[i]=alpha[s[i]];   // 알파벳에 따른 소요 시간을 배열에 대입
        sum+=s[i];
    }

    printf("%d", sum);

    return 0;
}