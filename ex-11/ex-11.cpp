/*
11. ������ ö�� ���� ���α׷��� �ۼ��Ͽ� ����.
���ڿ��� �Է����� �޾Ƽ� ���ڿ� �ȿ� ��ħǥ�� ������ ���ڿ��� ù ��° ���ڰ� �빮�������� �˻��Ѵ�.
���� �빮�ڰ� �ƴϸ� �빮�ڷ� ��ȯ�Ѵ�.
���� ������ ���� ��ħǥ�� �����ϴ����� �˻��Ѵ�. 
���� ��ħǥ�� ������ �־��ش�. �� �Էµ� ���ڿ��� "c++ is easy"��� "C++ is easy"�� ��ȯ�Ͽ� ȭ�鿡 ����Ѵ�.
TIP. getline(cin, s)�� �̿��Ͽ� �� ���� �Է¹޴´�.
toupper()�� ����ϸ� �빮�ڷ� ������ �� �ִ�.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    cout << "���ڿ��� �Է��Ͻÿ�:";
    getline(cin, s);


    if (s[0] != '.') {
        s[0] = toupper(s[0]);
    }

    if (s.back() != '.') {
        s += '.';
    }

    cout << "ö�� ������ ���ڿ�: " << s << endl;

    return 0;
}