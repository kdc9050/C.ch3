/*
7. 사용자로부터 문자열 5개를 읽어서 가장 긴 문자열을 화면에 출력한다.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    const int arraySize = 5;
    string list[arraySize];
    string longest;

    for (int i = 0; i < arraySize; i++) {
        cout << "문자열을 입력하시오: ";
        cin >> list[i];

        if (list[i].size() > longest.size()) {
            longest = list[i];
        }
    }

    cout << "제일 긴 문자열: " << longest << endl;

    return 0;
}
