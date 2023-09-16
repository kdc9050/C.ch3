/*
5. 화면에 "Hello"를 출력하는 sayHello() 함수를 작성한다. 
sayHello()는 하나의 매개 변수 n을 가지는데 n은 "Hello"출력을 반복하는 횟수를 나타낸다.
만약 인수가 주어지지 않으면 n의 값으로 1을 가정한다.
*/

#include <iostream>
#include <string>

using namespace std;

void sayHello(int n = 1) {
    for (int i = 0; i < n; i++) {
        cout << "Hello ";
        
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    cout << "sayHello()->";
    sayHello();
    cout << "sayHello("<<n<< ")->";
    sayHello(n);

    return 0;
}
