/*
13. ����ڷκ��� ��ȣ�� �Է¹޴´�.
������� ��ȣ�� ��ŷ�� ���Ͽ� ���������� ���θ� �˻��Ѵ�.
���� ��ȣ �ȿ� �빮��, �ҹ���, ���ڰ� ��� ��������� ������ ��ȣ�� �����Ѵ�.
���� ������� ��ȣ�� 3���� ������ ���ڸ� �� ������ ���� ������ ���α׷���
������ ���Ͽ� �� ���� ��ȣ�� ����϶�� �����Ѵ�.
TIP. ��ȣ �ȿ� �ҹ���, �빮��, ���ڰ� ���� �ִ����� �˻��Ѵ�.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string password;

    cout << "��ȣ�� �Է��Ͻÿ�: ";
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
        cout << "�����մϴ�." << endl;
    }
    else {
        cout << "�������� �ʽ��ϴ�." << endl;
    }

    return 0;
}
