#include <stdio.h>

int main(){
    char cmd[40];
    for(int i=1; i<=255; i++){
        sprintf(cmd, "ping -n 1 192.168.10.%d", i);
        system(cmd);
    }

    return 0;
}