#include <stdio.h>
// 두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 
// 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. 

// 수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 
// 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.
// 첫째 줄부터 열번째 줄 까지 숫자가 한 줄에 하나씩 주어진다. 
// 이 숫자는 1,000보다 작거나 같고, 음이 아닌 정수이다.
int main(){
    int arr[10], arr2[10], num=10;
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
        arr2[i]=arr[i]%42;
    }
    
    for(int i=0; i<10; i++){
        if(arr2[i]==-1) continue;
        for(int j=i+1; j<10; j++){      // int j=1;(x) i=0에서 j 전체 돌고, i=1에서 다시 j=1이 된다.
            if(arr2[i]==arr2[j]){       // 중복되면 또 중복으로 카운트해서 --num이 되어 값이 엉망이다.
                arr2[j]=-1;             // int j=i+1;로 설정해주자.
                --num;
            }

        }
    }
    printf("%d", num);

    return 0;
}