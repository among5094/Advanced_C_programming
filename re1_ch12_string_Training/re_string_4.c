#include <stdio.h>

void frequency(int* str);

int main()
{
    char str[100]; // ũ�� 100�� ���ڿ� �迭 ����
    char alphabet[26] = {0};

    gets(str); // ���� ���� ���ڿ� �Է¹ޱ�

    // ���ڿ����� ���ĺ� �󵵼� üũ
    for (int i = 0; i < strlen(str); i++)
        alphabet[(int)str[i] - 97]++; //�ҹ��ڴϱ�

    // ���ĺ� �󵵼� ���
    for (int i = 0; i < strlen(str); i++)
        printf("%c: %d\n", 97 + i, alphabet[i]);

    return 0;
}