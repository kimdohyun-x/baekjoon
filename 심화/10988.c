#include <stdio.h>
#include <string.h>

int main(){
    char s[101];
    scanf("%s", s);
    
    for(int i=strlen(s); i-1>strlen(s)-i; i--){
        if(s[i-1]!=s[strlen(s)-i]){
            printf("0");
            return 0;
        }
    }
    printf("1");

    return 0;
}