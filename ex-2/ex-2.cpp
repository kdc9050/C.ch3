/*
2. ����ڿ��� ���� �������� �Է¹޾Ƽ� ���� ���Ǹ� ����ϰ� ����ϴ� ���α׷��� �ۼ��Ѵ�. 
����(4.0/3.0 *3.14* pow(radius,3))�� ����Ͽ� ��ȯ�ϴ�inlie �Լ� calc_volume()�� �ۼ��Ͽ� ȣ���Ѵ�.
����Ʈ �μ� ��ɵ� ����غ���.
*/

#include <iostream>

using namespace std;

inline float calc_volume(float radius = 10.0) {
    return 4.0 / 3.0 * 3.14 * pow(radius, 3);
}

int main() {
    float radius;

    cout << "�������� �Է��Ͻÿ�:";
    cin >> radius;

    float result = calc_volume(radius);

    cout << "���� ���Ǵ� " << result << endl;

    return 0;
}
