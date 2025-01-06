#include <stdio.h>
#include <string.h>
// 전공평점 = 전공과목별 (학점 × 과목평점)의 합 / 학점의 총합
int main(){
    
    float rsum=0;       // 학점 총합
    float rscore=0;     // case문용 과목평점 변환 변수
    float rrscore=0;    // 학점 * 과목평점
    char input[20][100];    // 최대 20줄의 데이터 저장, 각 줄의 최대 길이가 100글자

    for(int i=0; i<20; i++){
        fgets(input[i], sizeof(input[i]), stdin);
    }

    for(int i=0; i<20; i++){
        char s[51];     //과목명
        float sum;      //학점
        char score[3]={0};    //과목평점

        sscanf(input[i], "%s %f %s", s, &sum, score);

        switch(score[0]){
            case 'A': rscore=4.0; break;
            case 'B': rscore=3.0; break;
            case 'C': rscore=2.0; break;
            case 'D': rscore=1.0; break;
            case 'F': rscore=0.0; break;
            case 'P': continue;     // break는 아예 거기서 종료하고 반복문 i+1로 넘어감
        }
        if(score[1]=='+'){
            rscore+=0.5;
        }
        if(score[0]!='P'){
            rsum+=sum;
            rrscore+=sum*rscore;
        }
        
    }

    printf("%f", rrscore/rsum);

    return 0;
}