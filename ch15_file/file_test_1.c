#include <stdio.h>

int main() {

	FILE* stream; //���� �����͸� �����Ѵ�.
	char str[50]; //����ڷ� ���� ���� ���ڿ��� ���� ������ �����Ѵ�.

	stream = fopen("test_1.txt", "w"); //test.txt�� ��������� ����.
	fgets(str, sizeof(str), stdin); //���ڿ��� �Է¹޴´�.
	fputs(str, stream); //���� ���ڿ� str�� stream�����Ͱ� ����Ű�� �ִ� ���� �ִ´�.

	fclose(stream); //������ �ݴ´�.

	return 0;
}