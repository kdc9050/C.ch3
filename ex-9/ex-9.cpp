/*
9. ���� �߻� �Լ��� rand()�� ����Ͽ��� 2���� �ֻ����� ������ ���� 7,11�̸� 
����ڰ� �̱�� �ֻ����� ���� 2,3,12�̸� ����ڰ� ���� ������ �ۼ��غ���.
TIP. dice1 -=rand()%6+1; �Ͽ��� �ֻ����� ���� �� �ִ�.
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    srand(time(NULL));

    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;
    int sum = dice1 + dice2;

    cout << "������� �ֻ���: " << dice1 << "+" << dice2 << "=" << sum << endl;

    if (sum == 7 || sum == 11) {
        cout << "����ڰ� �̰���ϴ�." << endl;
    }
    else if (sum == 2 || sum == 3 || sum == 12) {
        cout << "����ڰ� �����ϴ�." << endl;
    }

    return 0;
}
