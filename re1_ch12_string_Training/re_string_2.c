#include <stdio.h> //gets�Լ� ������� stdio��

void Delet_space(char* string); //������ �����ϴ� �Լ�

int main(void)
{
    char string[50]; //49�ڱ��� �Է¹��� �� ����, ���ڿ��� �������� null�� ���� ����
    printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ�: ");
    gets(string); //scanf�� ���� ���� �Ұ��� �׷��� gets�Լ� ����ߵ�

    Delet_space(string);
    //�迭�� �� �����ʹ�.
    //�Ű������� ������������ ����Ǿ� ������ &string[0]�� ���޵ȴ�. ��, �迭�� ù ��° �ּҰ��� ���޵Ǵ� ���̴�.
    //call by address��. �ٵ� �Ű������� ������,�迭 ������ �ƴϸ� call by value�̴�. 

    return 0;
}

void Delet_space(char* string) //������ �����ϴ� �Լ�
{
    for(int i=0; string[i] != '\0' ; i++) //��� Ʋ���� ���� null�� \0���� ����ϴµ� 0���� �Ἥ �������� ���
        if(string[i] != ' ')
            printf("%c", string[i]);
            //%s�̸� �������� %c���� �����. �Ƹ� ������ �����Ϸ��� string�� �ƴ϶� char������ ���ߵż� �׷� �� ����.
    
}

/*
����
1. gets�Լ��� ���� �ο� ���� ����Ʈ
https://blockdmask.tistory.com/343

2. 
NULL == '\0' 



*/