//���� 1��
#include <iostream>
#include <string>

using namespace std;

//���� �����
int getNum() {
    int Num = 0;
    
    cout << "���ڸ� �Է����ּ���. : ";
    cin >> Num;

    return Num;
};

int getSum(int num[]) {
    //�� ������ ���� ����
    int sum = 0;

    //�ݺ������� �� ���ϱ� += ���
    for (int i = 0; i < 5; i++)
    {
        sum += num[i];
    }
    
    //�� ����
    return sum;
};

int getAvg(int sum, int num) {
    cout << num << endl;
    //��� ������ ���� ����
    int avg = 0;
    
    avg = sum / num;

    //��� ����
    return avg;
};

int main()
{
    //���� 5���� ������ �迭 ����
    int fiveNum[5];

    //�ݺ������� ���� �����ͼ� ����
    for (int i = 0; i < 5; i++)
    {
        fiveNum[i] = getNum();
    }

    //�հ� ����� ������ ���� ����
    int Sum = 0;
    int Avg = 0;

    //�ձ��ϱ�
    Sum = getSum(fiveNum);
    //��� ���ϱ� �迭�� ����� 5�ΰ� ������ sizeof �� ����ؼ� �迭�� �����ŭ �����ش�
    int size = sizeof(fiveNum) / sizeof(fiveNum[0]);
    Avg = getAvg(Sum, size);

    cout << "������ ���� : " << Sum << endl;
    cout << "������ ����� : " << Avg << endl;

    return 0;
}

