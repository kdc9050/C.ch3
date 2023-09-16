/*
6. 사용자가 입력하는 전화번호에서 기호 (와 )를 삭제한 형태로 출력하는 프로그램을 작성해보자.
사용자가 "quit"를 입력하면 종료한다.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cout << "전화번호를 입력하시오: ";
    cin >> s;

    while (s != "quit") {
        string result = "";
        for (auto& c : s) {
            if (c != '(' && c != ')') {
                result += c;
            }
        }

        cout <<result << endl;

        cout << "전화번호를 입력하시오: ";
        cin >> s;
    }

    return 0;
}
