/*
4. 정수를 1과 자신만으로 나눌 수 있다면 소수라고 한다. 예를 들어 2,3,5,7은 소수이다.
주어진 숫자가 소수인지 여부를 결정하는 함수prime()을 작성한다. 
이 함수를 이용하여 2와 100사이의 모든 소수를 판별하고 출력하는 프로그램을 작성해보자.
*/

#include <iostream>

using namespace std;

bool prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}

int main() {

    for (int i = 2; i <= 100; i++) {
        if (prime(i)) cout << i << " ";
    }

    cout << endl;

    return 0;
}
