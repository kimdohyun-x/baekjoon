#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[4], b[4], aa[4], bb[4];
    scanf("%s %s", a, b);
    
    for(int i=0, j=2; i<3; i++, j--){
        aa[i]=a[j];
        bb[i]=b[j];
    }

    // stdlib 라이브러리에서 불러올 수 있는 atoi() - 문자열을 정수로 바꿔준다.
    int sum=atoi(aa);
    int sum2=atoi(bb);

    if(sum>sum2) printf("%d", sum);
    else printf("%d", sum2);

    return 0;
}
// 문자열 정할 때 무조건 필요한 양에서 +1 해줘야 함. 마지막에는 null이 들어가야 하기 때문
// stdlib 라이브러리를 불러와서 문자열을 정수로 변환해주는 atoi 함수를 쓸 수 있다.