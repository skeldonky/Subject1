//���� 1��
#include <iostream>
#include <string>
//������� ����
#include "Calculater.h"

int main()
{
    //Ŭ���� ����
    Calculater c;

    //���� 5�� �Է�
    c.setNum();

    //���� 5�� ����
    c.makeSort();

    //�ձ��ϱ�
    c.getSum();
    //��� ���ϱ� �迭�� ����� 5�ΰ� ������ sizeof �� ����ؼ� �迭�� �����ŭ �����ش�
    c.getAvg();

    //�հ� ��� ȣ��
    c.numPrint();

    return 0;
}

