/*
13. 사용자로부터 암호를 입력받는다.
사용자의 암호가 해킹에 대하여 안전한지의 여부를 검사한다.
만약 암호 안에 대문자, 소문자, 숫자가 모두 들어있으면 안전한 암호로 간주한다.
만약 사용자의 암호가 3가지 종류의 문자를 다 가지고 있지 않으면 프로그램은
보안을 위하여 더 강한 암호를 고려하라고 제안한다.
TIP. 암호 안에 소문자, 대문자, 숫자가 섞여 있는지를 검사한다.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string password;

    cout << "암호를 입력하시오: ";
    cin >> password;

    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;

    for (char c : password) {
        if (islower(c)) {
            hasLower = true;
        }
        else if (isupper(c)) {
            hasUpper = true;
        }
        else if (isdigit(c)) {
            hasDigit = true;
        }
    }

    if (hasLower && hasUpper && hasDigit) {
        cout << "안전합니다." << endl;
    }
    else {
        cout << "안전하지 않습니다." << endl;
    }

    return 0;
}
