/*
2. 사용자에게 구의 반지름을 입력받아서 구의 부피를 계산하고 출력하는 프로그램을 작성한다. 
수식(4.0/3.0 *3.14* pow(radius,3))을 계산하여 반환하는inlie 함수 calc_volume()을 작성하여 호출한다.
디폴트 인수 기능도 사용해보자.
*/

#include <iostream>

using namespace std;

inline float calc_volume(float radius = 10.0) {
    return 4.0 / 3.0 * 3.14 * pow(radius, 3);
}

int main() {
    float radius;

    cout << "반지름을 입력하시오:";
    cin >> radius;

    float result = calc_volume(radius);

    cout << "구의 부피는 " << result << endl;

    return 0;
}
