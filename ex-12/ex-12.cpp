/*
12. 사용자로부터 받은 문자열에서 각각의 문자가 나타나는 빈도를
계산하여 출력하는 프로그램을 작성하시오.
TIP. 문자는 아스키코드로 표현되고 0에서255까지의 값을 가진다.
따라서 크기가 256인 정수 배열을 선언하고 다음과 같이 반복 루프를 통하여 빈도를 구한다.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int counter[256] = { 0 }; 
    string s;

    cout << "문자열을 입력하시오:";
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        counter[(int)s[i]]++;
    }

    for (char c = 'a'; c <= 'z'; c++) {
        cout << c << ": " << counter[(int)c] << endl;
    }

    return 0;
}



