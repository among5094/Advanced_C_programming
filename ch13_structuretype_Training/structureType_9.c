#include <stdio.h>
#include <math.h>
//����: �Ϸ絿�� ���� ������ �Է¹޾� ����ü�� �迭�� �����ϰ� �Ϸ絿�� ���� ���� Į�θ� ���

//����ü ����
struct food{
    char name[100]; //������ �̸�
    int calories; //������ Į�θ�
};

//Į�θ��� ���� ���ϴ� �Լ�
int cal_sum(struct food array[], int size); 

int main(void)
{
    struct food food_array[3]={ 
        {"hambuger",900},
        {"pizza",1100},
        {"malatang",1100} }; // ����ü �迭 ����
    
    printf("�� Į�θ�=%d\n", cal_sum(food_array, 3));
    
    return 0;
}

int cal_sum(struct food array[], int size) //Į�θ��� ���� ���ϴ� �Լ�
{   
    //struct food array[3]; �̰� �����ϱ� �����
    int sum=0;
    for(int i=0; i<size; i++)
        sum = array[i].calories + sum;

    return sum;
   
}
