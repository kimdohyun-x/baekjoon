#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int count=n;
    
    for(int i=0; i<n; i++){
        char s[101];
        int alpha[26]={0};
        scanf("%s", s);

        for(int j=0; s[j]!=0; j++){
            if(alpha[s[j]-'a']==1){
                if(s[j]!=s[j-1]){
                    --count;
                    break;
                }
            }
            else
            alpha[s[j]-'a']=1;
        }
    }

    printf("%d", count);
    
    return 0;
}