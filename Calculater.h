#pragma once
#include <iostream>
#include <string>

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
    //���� ȣ��
    void makeSort();
    //��������
    void upSorting();
    //��������
    void downSorting();

private:
    //���� ���� �迭(���� 5��), ��, ���
    int fiveNum[5];
    int sum;
    int size;
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

    //�迭 ������� ������
    avg = double(sum) / size;
}

void Calculater::makeSort() {
    //�������� �������� ����
    string check;
    cout << "�������� �Ϸ��� 1, �������� �Ϸ��� 2�� �Է����ּ���.(�ٸ��� �Է½� ����X)";
    cin >> check;

    //�迭 ������ Ȯ�� ������ sizeof(�迭�� ũ�⸦ ���ϴ� ���) ���
    size = (double)(sizeof(fiveNum) / sizeof(int));

    if (check == "1")
    {
        cout << "1" << endl;
        //��������
        upSorting();
        cout << "���������� �����ϼ̽��ϴ�." << endl;
    }
    else if (check == "2") {
        cout << "2" << endl;
        //��������
        downSorting();
        cout << "���������� �����ϼ̽��ϴ�." << endl;
    }
    else {
        cout << "�������� �ʾҽ��ϴ�." << endl;
        return;
    }
    for (int i = 0; i < size; i++)
    {
        cout << fiveNum[i] << " ";
    }
}

void Calculater::upSorting() {
    // �迭�� ���̱��� �ݺ�
    for (int i = 0; i < size; i++) {
        // i�� �ݺ��� Ƚ���� �� ��ŭ �ݺ�
        // 1�� ���� ������, j + 1�� ���� ���� ���ϱ� ����
        for (int j = 0; j < size - 1 - i; j++) {
            // �ش� ��Ұ� ���� ��Һ��� ũ��
            if (fiveNum[j] > fiveNum[j + 1]) {
                // ���� �ڸ� �ٲ� ��(�������ڸ� ������)
                swap(fiveNum[j], fiveNum[j + 1]);
            }
        }
    }
}

void Calculater::downSorting() {
    // �迭�� ���̱��� �ݺ�
    for (int i = 0; i < size; i++) {
        // i�� �ݺ��� Ƚ���� �� ��ŭ �ݺ�
        // 1�� ���� ������, j + 1�� ���� ���� ���ϱ� ����
        for (int j = 0; j < size - 1 - i; j++) {
            // �ش� ��Ұ� ���� ��Һ��� ������
            if (fiveNum[j] < fiveNum[j + 1]) {
                // ���� �ڸ� �ٲ� ��(�������ڸ� ������)
                swap(fiveNum[j], fiveNum[j + 1]);
            }
        }
    }
}

