#include <stdio.h>
//���� ������ ch14��

void pr_str_array(char **dp);

int main(void)
{
    //�������迭�� ���� �����ϱ�
    char *arr[] = {
        "a1aaaaa",
        "bbbbbb",
        "cc",
        "ddddd",
        "eeeee5",
        "ffff6fff"
    };

    //�迭 ���� ���� ���
    int num = sizeof(arr)/sizeof(arr[0]);

    for(int col=0; col<num ; col++)
    {
        printf("%s \n", *(arr+col));
    }
    


    return 0;
}

void pr_str_array(char **dp)
{


}