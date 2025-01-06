#include <stdio.h>

int main() {

	char c;

	while(scanf("%c", &c) != EOF) {
		printf("%c", c);
	}

	return 0;
}
/*

<fgets 사용법> : enter로 입력 나눔
char *fgets(char *str, int n, FILE *stream); 입력된 문자열, 읽어들일 최대 문자 수, 입력 스트림(stdin)
int strcmp(앞 문자열, 뒷 문자열); 두 문자열이 같으면 0, 앞 문자열이 앞설 때 음수, 뒷 문자열이 앞설 때 양수 반환
EOF란? 데이터 소스로부터 더 이상 읽을 수 있는 데이터가 없음을 나타냄

*/