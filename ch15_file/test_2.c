#include <stdio.h>
//12�� 06�� c��� ��������� �ǽ�2

int main(void)
{
    int i;
    float f;
    FILE* fp;

    fp = fopen("irr0044.txt", "r"); //fp�� ����Ű�� �� , !!fopen ������ ������ ������ߵ�

    if(fp != NULL) //���Ͼȿ� ������ �ƴ϶��? ��, ������ �����ٸ�?
        fscanf(fp, "%d %f", &i, &f); //

    printf("%d\n%f\n", i, f); //�Է¹����� ������ֱ�
    fclose(fp); //���� �ݾ��ֱ�
    return 0;
}