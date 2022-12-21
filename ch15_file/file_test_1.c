#include <stdio.h>

int main() {

	FILE* stream; //파일 포인터를 선언한다.
	char str[50]; //사용자로 부터 받을 문자열를 담을 변수를 선언한다.

	stream = fopen("test_1.txt", "w"); //test.txt를 쓰기용으로 연다.
	fgets(str, sizeof(str), stdin); //문자열을 입력받는다.
	fputs(str, stream); //받은 문자열 str을 stream포인터가 가르키고 있는 곳에 넣는다.

	fclose(stream); //파일을 닫는다.

	return 0;
}