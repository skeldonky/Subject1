#pragma once
#include <iostream>
#include <string>

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
    //정렬 호출
    void makeSort();
    //오름차순
    void upSorting();
    //내림차순
    void downSorting();

private:
    //변수 선언 배열(숫자 5개), 합, 평균
    int fiveNum[5];
    int sum;
    int size;
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

    //배열 사이즈로 나누기
    avg = double(sum) / size;
}

void Calculater::makeSort() {
    //오름차순 내림차순 선택
    string check;
    cout << "오름차순 하려면 1, 내림차순 하려면 2를 입력해주세요.(다른것 입력시 정렬X)";
    cin >> check;

    //배열 사이즈 확인 연습겸 sizeof(배열의 크기를 구하는 방법) 사용
    size = (double)(sizeof(fiveNum) / sizeof(int));

    if (check == "1")
    {
        cout << "1" << endl;
        //오름차순
        upSorting();
        cout << "오름차순을 선택하셨습니다." << endl;
    }
    else if (check == "2") {
        cout << "2" << endl;
        //내림차순
        downSorting();
        cout << "내림차순을 선택하셨습니다." << endl;
    }
    else {
        cout << "정렬하지 않았습니다." << endl;
        return;
    }
    for (int i = 0; i < size; i++)
    {
        cout << fiveNum[i] << " ";
    }
}

void Calculater::upSorting() {
    // 배열의 길이까지 반복
    for (int i = 0; i < size; i++) {
        // i가 반복된 횟수를 뺀 만큼 반복
        // 1을 빼는 이유는, j + 1로 다음 항을 비교하기 때문
        for (int j = 0; j < size - 1 - i; j++) {
            // 해당 요소가 다음 요소보다 크면
            if (fiveNum[j] > fiveNum[j + 1]) {
                // 둘이 자리 바꿀 것(낮은숫자를 앞으로)
                swap(fiveNum[j], fiveNum[j + 1]);
            }
        }
    }
}

void Calculater::downSorting() {
    // 배열의 길이까지 반복
    for (int i = 0; i < size; i++) {
        // i가 반복된 횟수를 뺀 만큼 반복
        // 1을 빼는 이유는, j + 1로 다음 항을 비교하기 때문
        for (int j = 0; j < size - 1 - i; j++) {
            // 해당 요소가 다음 요소보다 작으면
            if (fiveNum[j] < fiveNum[j + 1]) {
                // 둘이 자리 바꿀 것(높은숫자를 앞으로)
                swap(fiveNum[j], fiveNum[j + 1]);
            }
        }
    }
}

