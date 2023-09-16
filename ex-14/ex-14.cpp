/*
14. 단언 애나그램(anagram) 게임을 작성해보자.
영어 단어를 이루는 글자들이 뒤죽박죽 섞인 것을 받아서 순서대로
재배치하는 게임을 애나그램 게임이라고 한다.
TIP 문자열 안의 글자들을 섞으려면 난수가 필요하다.
2개의 난수를 발생기켜서 그 위치의 글자들을 서로 바꾸면 된다.
이것을 문자열의 길이만큼 반복한다.
물론 난수의 범위는 문자열 안이어야 한다.
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
        cout << scrambledWord << "은 어떤 단어가 스크램블된 것일까요? ";
        cin >> guess;

        if (guess == originalWord) {
            cout << "축하합니다." << endl;
            break;
        }
    }

    return 0;
}
