/*
10. "동전 던지기"를 시뮬레이트하는 프로그램을 작성한다.
프로그램이 동전을 100번 던지고 동전의 각면이 나타나는 횟수를 세어 출력한다.
난수를 발생하여서 0 또는 1을 반환하는 flip()함수를 작성하여 사용하라.
프로그램이 "동전 던지기"를 올바르게 시뮬레이트하는 경우, 동전의 각 면이 대략 절반정도 나타난다.
TIP. rand()%2; 하여서 0이면 앞면, 1이면 뒷면으로 생각하면 된다.
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

    cout << "동전의 앞면: " << head << endl;
    cout << "동전의 뒷면: " << tail << endl;

    return 0;
}