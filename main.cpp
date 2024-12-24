//과제 1번
#include <iostream>
#include <string>
//헤더파일 참조
#include "Calculater.h"

int main()
{
    //클래스 선언
    Calculater c;

    //숫자 5개 입력
    c.setNum();

    //합구하기
    c.getSum();
    //평균 구하기 배열의 사이즈가 5인건 알지만 sizeof 를 사용해서 배열의 사이즈만큼 나눠준다
    c.getAvg();

    //합과 평균 호출
    c.numPrint();

    return 0;
}

