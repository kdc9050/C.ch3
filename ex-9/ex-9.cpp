/*
9. 난수 발생 함수인 rand()를 사용하여서 2개의 주사위를 굴려서 합이 7,11이면 
사용자가 이기고 주사위의 합이 2,3,12이면 사용자가 지는 게임을 작성해보자.
TIP. dice1 -=rand()%6+1; 하여서 주사위를 굴릴 수 있다.
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

    cout << "사용자의 주사위: " << dice1 << "+" << dice2 << "=" << sum << endl;

    if (sum == 7 || sum == 11) {
        cout << "사용자가 이겼습니다." << endl;
    }
    else if (sum == 2 || sum == 3 || sum == 12) {
        cout << "사용자가 졌습니다." << endl;
    }

    return 0;
}
