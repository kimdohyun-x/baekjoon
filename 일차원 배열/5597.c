#include <stdio.h>
// 30명의 학생 중 28명만이 과제를 제출했어. 
// 입력에 enter 키로 28명의 번호를 입력하면,
// 출력에서 과제를 제출하지 않은 학생의 번호가 나와야 해
int main(){
    int arr[30]={0}, x, arr2[2], j=0;
    
    for(int i=0; i<28; i++){
        scanf("%d", &x);        // scanf인데 & 안 붙이는 간단한 실수했음!
        arr[x-1]=x;
    }
    for(int i=0; i<30; i++){
        if(arr[i]==0){
            arr2[j]=i+1;        // arr2[j]=arr[i](X), arr[i]는 0이므로 i+1(출석 번호)을 해줘야 한다.
            ++j;
        }
    }
    for(int i=0; i<=1; i++)
    printf("%d\n", arr2[i]);
    
    return 0;
}

// 굳이 반복문 밖에서 int i=0;을 선언해놓고 반복문 안에서 i를 남용하는 것은 좋지 않다. 아마도?...