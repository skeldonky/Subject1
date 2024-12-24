//과제 1번
#include <iostream>
#include <string>

using namespace std;

//숫자 물어보기
int getNum() {
    int Num = 0;
    
    cout << "숫자를 입력해주세요. : ";
    cin >> Num;

    return Num;
};

int getSum(int num[]) {
    //합 저장할 변수 선언
    int sum = 0;

    //반복문으로 값 더하기 += 사용
    for (int i = 0; i < 5; i++)
    {
        sum += num[i];
    }
    
    //합 리턴
    return sum;
};

int getAvg(int sum, int num) {
    cout << num << endl;
    //평균 저장할 변수 선언
    int avg = 0;
    
    avg = sum / num;

    //평균 리턴
    return avg;
};

int main()
{
    //숫자 5개를 저장할 배열 선언
    int fiveNum[5];

    //반복문으로 숫자 가져와서 저장
    for (int i = 0; i < 5; i++)
    {
        fiveNum[i] = getNum();
    }

    //합과 평균을 저장할 변수 선언
    int Sum = 0;
    int Avg = 0;

    //합구하기
    Sum = getSum(fiveNum);
    //평균 구하기 배열의 사이즈가 5인건 알지만 sizeof 를 사용해서 배열의 사이즈만큼 나눠준다
    int size = sizeof(fiveNum) / sizeof(fiveNum[0]);
    Avg = getAvg(Sum, size);

    cout << "숫자의 합은 : " << Sum << endl;
    cout << "숫자의 평균은 : " << Avg << endl;

    return 0;
}

