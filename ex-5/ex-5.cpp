/*
5. ȭ�鿡 "Hello"�� ����ϴ� sayHello() �Լ��� �ۼ��Ѵ�. 
sayHello()�� �ϳ��� �Ű� ���� n�� �����µ� n�� "Hello"����� �ݺ��ϴ� Ƚ���� ��Ÿ����.
���� �μ��� �־����� ������ n�� ������ 1�� �����Ѵ�.
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
