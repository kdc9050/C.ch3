/*
14. �ܾ� �ֳ��׷�(anagram) ������ �ۼ��غ���.
���� �ܾ �̷�� ���ڵ��� ���׹��� ���� ���� �޾Ƽ� �������
���ġ�ϴ� ������ �ֳ��׷� �����̶�� �Ѵ�.
TIP ���ڿ� ���� ���ڵ��� �������� ������ �ʿ��ϴ�.
2���� ������ �߻����Ѽ� �� ��ġ�� ���ڵ��� ���� �ٲٸ� �ȴ�.
�̰��� ���ڿ��� ���̸�ŭ �ݺ��Ѵ�.
���� ������ ������ ���ڿ� ���̾�� �Ѵ�.
*/
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

void swap(string& word, int pos1, int pos2) {
    char temp = word[pos1];
    word[pos1] = word[pos2];
    word[pos2] = temp;
}

int main() {
    srand(time(NULL));

    string originalWord = "apple";
    string scrambledWord = originalWord; 
  
    for (int i = 0; i < originalWord.length(); ++i) {
        int random1 = rand() % originalWord.length();
        int random2 = rand() % originalWord.length();
        swap(scrambledWord, random1, random2);
    }

    string guess;

    while (true) {
        cout << scrambledWord << "�� � �ܾ ��ũ����� ���ϱ��? ";
        cin >> guess;

        if (guess == originalWord) {
            cout << "�����մϴ�." << endl;
            break;
        }
    }

    return 0;
}
