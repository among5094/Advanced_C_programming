#include <stdio.h>
//������ �迭 - ����p.615~618

int main(void)
{
    int i,n;

    char *arr[]={
        "aaa",
        "bbb",
        "ccc",
        "ddd",
        "eee"
    };

    n=sizeof(arr)/sizeof(arr[0]); //�迭 ���� ���� ����
    //sizeof(arr): �迭 ��ü�� ����Ʈ, sizeof(arr[0]):ù��° �迭 ����� ũ�⸦ ����Ʈ ������ ���Ѵ�.

    for(i=0;i<n;i++)
        printf("%s \n", arr[i]);    

    return 0;
}