/*
3. 다른 두 변이 주어 졌을 때 직각 삼각형의 빗변을 계산하는 함수hypot()를 정의 해보자.
이 함수는 두 개의 double형 인수를 취해야 하고 빗변을 double형으로 반환해야 한다.
*/

#include <iostream>
using namespace std;

double hypot(double a, double b) {
    return sqrt(a * a + b * b);
}

int main() {
    double a, b;

    cout << "직각삼각형의 한 변: ";
    cin >> a;
    cout << "직각삼각형의 다른 변: ";
    cin >> b;

    double result = hypot(a, b);

    cout << "빗변: " << result << endl;

    return 0;
}
