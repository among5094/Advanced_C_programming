#include <stdio.h>
/*
���� �ӿ� ���� �ִ�. ����: ���ڿ��� "�迭�� �μ��� �޾Ƽ�" ����� ���ڿ��� ���� ����ϴ� �Լ��� �ۼ��Ͽ� �׽�Ʈ����.
���������͸� �������� �����Ͱ� ����Ǿ���Ѵ�.

+)����: call by value, call by address�� ���� ���� ��α�
https://ansan-survivor.tistory.com/1255
����p. 614~615
*/

void pr_str_array(char **dp, int n);

int main(void)
{
    char *arr[10] = {
        "A bad shearer never had a good sickle.",
        "A bad workman (always) blames his tools.",
        "A bad workman quarrels with his tools.",
        "A bad thing never dies.",
        "A bad workman finds fault with his tools.",
        "A bad workman always blames his tools.",
        "A bargain is a bargain.",
        "A barking dog never bites.",
        "A barking dog was never a good hunter.",
        "A bad thing never dies."
    };

    pr_str_array(arr, 10);//�Լ� ȣ��
    return 0;
}

void pr_str_array(char **dp, int n)
{
    for (int i=0;i<n;i++)
        printf("%s\n", dp[i]); //�� �κ� ���� �� ������Ʈ�ϱ�
        /*
        �� �׳� dp[i]�̰͸� ����? �տ� *�� �ʿ���°ɱ�
        -> ���ڿ��̱� ������ �� ���ִ� ���̰�, ���ڸ� ���־�� �Ѵ�.
        */
 }

 