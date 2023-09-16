//1. 3개의 정수 중에서 최대값을 찾는 함수maximum(x,y,z)를 정의하고 테스트하라.

#include<iostream>
using namespace std;

int maximum(int x, int y, int z) {
    if (x > y && x > z)
        return x;
    else if (y > x && y > z)
        return y;
    else
        return z;
}

int main() {
    int x, y, z;

    cout << "3개의 정수를 입력하시오:";
    cin >> x >> y >> z;

    int max_value = maximum(x, y, z);

    cout << "가장 큰 정수는 " << max_value << endl;

    return 0;
}
