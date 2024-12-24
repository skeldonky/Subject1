#pragma once
#include <iostream>

using namespace std;

class Calculater
{
public:
    //���
    void getAvg();
    //��
    void getSum();
    //����
    void setNum();
    //���
    void numPrint();
private:
    //���� ���� �迭(���� 5��), ��, ���
    int fiveNum[5];
    int sum;
    double avg;
};

//���� �Է��ϱ�
void Calculater::setNum() {
    for (int i = 0; i < 5; i++)
    {
        int num = 0;
        cout << i + 1 << "��° ���ڸ� �Է����ּ��� : ";
        cin >> num;
        fiveNum[i] = num;
    }
}
//��� �ϱ�
void Calculater::numPrint() {
    cout << "������ ���� : " << sum << endl;
    cout << "������ ����� : " << avg << endl;
}


// �ձ��ϱ�
void Calculater::getSum() {
    //������ ����
    int num = 0;
    //sum �� Ȥ�� �𸣴� �ѹ� �ʱ�ȭ
    sum = 0;

    //�� ���ϱ�
    for (int i = 0; i < 5; i++)
    {
        num += fiveNum[i];
    }

    //�� ����
    sum = num;
}

// ��� ���ϱ�
void Calculater::getAvg() {
    //avg�� Ȥ�ø𸣴� �ʱ�ȭ
    avg = 0;

    //5�� �����°� ������ ������ sizeof(�迭�� ũ�⸦ ���ϴ� ���) ���
    avg = double(sum) / (double)(sizeof(fiveNum) / sizeof(int));
}