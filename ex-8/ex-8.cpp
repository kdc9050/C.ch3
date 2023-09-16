/*
8. 0���� 9������ ������ 100�� �����Ͽ� ���� ���� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
������ rand() �Լ��� ����Ͽ� �����϶�.
TIP ũ�Ⱑ 10�� �迭�� ��Ÿ���� Ƚ���� �����Ѵ�.
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

    cout << "���� ���� ������ ��: " << most << endl;

    return 0;
}
