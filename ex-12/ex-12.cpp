/*
12. ����ڷκ��� ���� ���ڿ����� ������ ���ڰ� ��Ÿ���� �󵵸�
����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
TIP. ���ڴ� �ƽ�Ű�ڵ�� ǥ���ǰ� 0����255������ ���� ������.
���� ũ�Ⱑ 256�� ���� �迭�� �����ϰ� ������ ���� �ݺ� ������ ���Ͽ� �󵵸� ���Ѵ�.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int counter[256] = { 0 }; 
    string s;

    cout << "���ڿ��� �Է��Ͻÿ�:";
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        counter[(int)s[i]]++;
    }

    for (char c = 'a'; c <= 'z'; c++) {
        cout << c << ": " << counter[(int)c] << endl;
    }

    return 0;
}



