#include <stdio.h>
//12�� 06�� c��� ���� �ǽ�1
int main(void)
{
    int i=23;
    float f=1.2345;
    FILE* fp;
    
    fp = fopen("irr0044.txt", "w"); //���� ������, r�� ������

    if(fp != NULL) //������ �����ٸ�?
        fprintf(fp, "%10d %16.3f", i, f);

    fclose(fp); //���� �ݾ��ֱ�

    return 0;

}