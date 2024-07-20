#include <iostream>
#include <vector>
using namespace std;

const int NOT_FOUND = -1;
string* createWordsArray(string sentence, int& outWordsArrSize);

int main(){
    string* wordArr;
    int outWordsArrSize;
    string sentence = "This is a test.";

    wordArr = createWordsArray(sentence, outWordsArrSize);
    //cout << wordArr << endl;
    cout << outWordsArrSize << endl;
}

string* createWordsArray(string sentence, int& outWordsArrSize){
    string* wordArr;
    int wordArrSize = 0, spaceFound;

    spaceFound = sentence.find(" ");

    while(spaceFound != NOT_FOUND){
        wordArr[wordArrSize] = sentence.substr(0,spaceFound);
        sentence = sentence.substr(spaceFound+1);
        spaceFound = sentence.find(" ");
        wordArrSize ++;
    }

    outWordsArrSize = wordArrSize;
    return wordArr;
}
