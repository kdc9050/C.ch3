/*
3. �ٸ� �� ���� �־� ���� �� ���� �ﰢ���� ������ ����ϴ� �Լ�hypot()�� ���� �غ���.
�� �Լ��� �� ���� double�� �μ��� ���ؾ� �ϰ� ������ double������ ��ȯ�ؾ� �Ѵ�.
*/

#include <iostream>
using namespace std;

double hypot(double a, double b) {
    return sqrt(a * a + b * b);
}

int main() {
    double a, b;

    cout << "�����ﰢ���� �� ��: ";
    cin >> a;
    cout << "�����ﰢ���� �ٸ� ��: ";
    cin >> b;

    double result = hypot(a, b);

    cout << "����: " << result << endl;

    return 0;
}
