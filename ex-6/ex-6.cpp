/*
6. ����ڰ� �Է��ϴ� ��ȭ��ȣ���� ��ȣ (�� )�� ������ ���·� ����ϴ� ���α׷��� �ۼ��غ���.
����ڰ� "quit"�� �Է��ϸ� �����Ѵ�.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cout << "��ȭ��ȣ�� �Է��Ͻÿ�: ";
    cin >> s;

    while (s != "quit") {
        string result = "";
        for (auto& c : s) {
            if (c != '(' && c != ')') {
                result += c;
            }
        }

        cout <<result << endl;

        cout << "��ȭ��ȣ�� �Է��Ͻÿ�: ";
        cin >> s;
    }

    return 0;
}
