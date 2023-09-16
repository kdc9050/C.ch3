/*
10. "���� ������"�� �ùķ���Ʈ�ϴ� ���α׷��� �ۼ��Ѵ�.
���α׷��� ������ 100�� ������ ������ ������ ��Ÿ���� Ƚ���� ���� ����Ѵ�.
������ �߻��Ͽ��� 0 �Ǵ� 1�� ��ȯ�ϴ� flip()�Լ��� �ۼ��Ͽ� ����϶�.
���α׷��� "���� ������"�� �ùٸ��� �ùķ���Ʈ�ϴ� ���, ������ �� ���� �뷫 �������� ��Ÿ����.
TIP. rand()%2; �Ͽ��� 0�̸� �ո�, 1�̸� �޸����� �����ϸ� �ȴ�.
*/

#include <iostream>
#include<time.h>
using namespace std;

int flip() {
    return rand() % 2;
}

int main() {
    srand(time(NULL));

    int head = 0;
    int tail = 0;

    for (int i = 0; i < 100; i++) {
        int result = flip();
        if (result == 0) {
            head++;
        }
        else {
            tail++;
        }
    }

    cout << "������ �ո�: " << head << endl;
    cout << "������ �޸�: " << tail << endl;

    return 0;
}