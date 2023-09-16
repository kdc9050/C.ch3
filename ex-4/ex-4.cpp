/*
4. ������ 1�� �ڽŸ����� ���� �� �ִٸ� �Ҽ���� �Ѵ�. ���� ��� 2,3,5,7�� �Ҽ��̴�.
�־��� ���ڰ� �Ҽ����� ���θ� �����ϴ� �Լ�prime()�� �ۼ��Ѵ�. 
�� �Լ��� �̿��Ͽ� 2�� 100������ ��� �Ҽ��� �Ǻ��ϰ� ����ϴ� ���α׷��� �ۼ��غ���.
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
