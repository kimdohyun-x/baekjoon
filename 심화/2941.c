#include <stdio.h>
#include <string.h>

int main(){
    char* s[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    char s2[101];
    int count = 0;
    scanf("%100s", s2);
    
    for(int i=0; s2[i]!=0; i++){
        for(int j=0; j<8; j++){
            if(strncmp(&s2[i], s[j], strlen(s[j]))==0){     // 원래 strncmp는 반드시 문자열의 시작 '주소'를 받아야 하므로 &을 붙임
                count++;
                
                break;
            }
            }
        }

    printf("%d", strlen(s2)-count);
    
    return 0;
}