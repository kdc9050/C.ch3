/*
7. ����ڷκ��� ���ڿ� 5���� �о ���� �� ���ڿ��� ȭ�鿡 ����Ѵ�.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    const int arraySize = 5;
    string list[arraySize];
    string longest;

    for (int i = 0; i < arraySize; i++) {
        cout << "���ڿ��� �Է��Ͻÿ�: ";
        cin >> list[i];

        if (list[i].size() > longest.size()) {
            longest = list[i];
        }
    }

    cout << "���� �� ���ڿ�: " << longest << endl;

    return 0;
}
