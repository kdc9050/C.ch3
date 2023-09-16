/*
8. 0부터 9까지의 난수를 100번 생성하여 가장 많이 생성된 수를 출력하는 프로그램을 작성하시오.
난수는 rand() 함수를 사용하여 생성하라.
TIP 크기가 10인 배열에 나타나는 횟수를 저장한다.
*/
#include <iostream>
#include<time.h>
using namespace std;

int main() {
    srand(time(NULL));

    int count[10]; 

    for (int i = 0; i < 100; i++) {
        int number = rand() % 10;
        count[number]++;
    }

    int most = 0;

    for (int i = 1; i < 10; i++) {
        if (count[i] > count[most]) {
            most = i;
        }
    }

    cout << "가장 많이 생성된 수: " << most << endl;

    return 0;
}
