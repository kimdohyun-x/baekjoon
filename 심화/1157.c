#include <stdio.h>

int main(){
    char s[1000001];
    int alphabet[26] = {0};
    scanf("%1000000s", s);
    
    for(int i=0; s[i]!=0; i++){
        if(s[i]>='a'&&s[i]<='z'){
            alphabet[s[i]-'a']++;
        }
        else if(s[i]>='A'&&s[i]<='Z'){
            alphabet[s[i]-'A']++;
        }
    }

    int max=0;
    int max_index=-1;
    int is_duplicate=0;
    for(int i=0; i<26; i++){
        if(alphabet[i]>max){
            max=alphabet[i];
            max_index=i;
            is_duplicate=0;
        }
        else if(alphabet[i]==max){
            is_duplicate=1;
        }
    }

    if(is_duplicate)
        printf("?");

    else
    printf("%c", max_index+'A');

    return 0;
}