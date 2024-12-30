// 신호가 가는 아이피를 txt 파일로 저장

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char cmd[50];
    char buffer[128];
    FILE *fp, *output;

    // 결과를 저장할 텍스트 파일 열기
    output = fopen("ping_results.txt", "w");
    if (output == NULL) {
        printf("결과 파일을 열 수 없습니다.\n");
        return 1;
    }

    // 192.168.10.1 ~ 192.168.10.255 범위 ping 실행
    for (int i = 1; i <= 255; i++) {
        sprintf(cmd, "ping -n 1 192.168.10.%d", i); // Windows용 ping 명령어

        // 명령어 실행 결과를 읽기
        fp = popen(cmd, "r");
        if (fp == NULL) {
            printf("ping 명령 실행 실패: %s\n", cmd);
            continue;
        }

        int is_success = 0;

        // ping 결과를 한 줄씩 읽음
        while (fgets(buffer, sizeof(buffer), fp) != NULL) {
            // "TTL" 문자열이 있다면 ping 성공
            if (strstr(buffer, "TTL") != NULL) {
                is_success = 1;
                break;
            }
        }

        // ping 성공 시 IP 출력 및 파일에 저장
        if (is_success) {
            printf("응답 있음: 192.168.10.%d\n", i);
            fprintf(output, "응답 있음: 192.168.10.%d\n", i);

            // 출력이 바로 저장되지 않고 버퍼에 머물러 있었던 것 같다.
            // 파일 쓰기 후 fflush를 호출해 강제로 버퍼를 지운다.
            fflush(output);
        }

        // 명령어 실행 종료
        pclose(fp);
    }

    // 텍스트 파일 닫기
    fclose(output);

    return 0;
}
