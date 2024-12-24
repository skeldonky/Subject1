#pragma once
#include <iostream>

using namespace std;

class Calculater
{
public:
    //평균
    void getAvg();
    //합
    void getSum();
    //숫자
    void setNum();
    //출력
    void numPrint();
private:
    //변수 선언 배열(숫자 5개), 합, 평균
    int fiveNum[5];
    int sum;
    double avg;
};

//숫자 입력하기
void Calculater::setNum() {
    for (int i = 0; i < 5; i++)
    {
        int num = 0;
        cout << i + 1 << "번째 숫자를 입력해주세요 : ";
        cin >> num;
        fiveNum[i] = num;
    }
}
//출력 하기
void Calculater::numPrint() {
    cout << "숫자의 합은 : " << sum << endl;
    cout << "숫자의 평균은 : " << avg << endl;
}


// 합구하기
void Calculater::getSum() {
    //저장할 변수
    int num = 0;
    //sum 값 혹시 모르니 한번 초기화
    sum = 0;

    //값 더하기
    for (int i = 0; i < 5; i++)
    {
        num += fiveNum[i];
    }

    //값 저장
    sum = num;
}

// 평균 구하기
void Calculater::getAvg() {
    //avg값 혹시모르니 초기화
    avg = 0;

    //5로 나누는건 알지만 연습겸 sizeof(배열의 크기를 구하는 방법) 사용
    avg = double(sum) / (double)(sizeof(fiveNum) / sizeof(int));
}