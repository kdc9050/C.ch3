/*
11. 간단한 철자 교정 프로그램을 작성하여 보자.
문자열을 입력으로 받아서 문자열 안에 마침표가 있으면 문자열의 첫 번째 문자가 대문자인지를 검사한다.
만약 대문자가 아니면 대문자로 변환한다.
또한 문장의 끝에 마침표가 존재하는지를 검사한다. 
역시 마침표가 없으면 넣어준다. 즉 입력된 문자열이 "c++ is easy"라면 "C++ is easy"로 변환하여 화면에 출력한다.
TIP. getline(cin, s)을 이용하여 한 줄을 입력받는다.
toupper()를 사용하면 대문자로 변경할 수 있다.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    cout << "문자열을 입력하시오:";
    getline(cin, s);


    if (s[0] != '.') {
        s[0] = toupper(s[0]);
    }

    if (s.back() != '.') {
        s += '.';
    }

    cout << "철자 교정된 문자열: " << s << endl;

    return 0;
}