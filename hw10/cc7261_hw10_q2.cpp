#include <iostream>
#include <vector>
using namespace std;

string* readText1(int& outTextArrSize);
string* readText2(int& outTextArrSize);
void readText2Alternative(string*& outTextArr, int& outTextArrSize);
vector<string> readText3();
int main_arr();
int main_arr_alternative();
int main_vector();

int main(){
    main_arr_alternative();
    return 0;
}

int main_arr_alternative(){
    string* textArr = NULL;
    int textArrSize, i;

    readText2Alternative(textArr, textArrSize);

    cout<<"Your text is:"<<endl;
    for(i = 0; i < textArrSize; i += 1)
        cout<<i+1<<". "<<textArr[i]<<endl;

    delete []textArr;
    textArr = NULL;
    return 0;
}

void readText2Alternative(string*& outTextArr, int& outTextArrSize){
    string* textArr;
    int textArrSize;

    textArr = readText2(textArrSize);

    outTextArrSize = textArrSize;
    outTextArr = textArr;
}

int main_arr() {
    string* textArr = NULL;
    int textArrSize, i;

    textArr = readText2(textArrSize);

    cout<<"Your text is:"<<endl;
    for(i = 0; i < textArrSize; i += 1)
        cout<<i+1<<". "<<textArr[i]<<endl;

    delete []textArr;
    textArr = NULL;
    return 0;
}


string* readText1(int& outTextArrSize){
    string* textArr;
    int textArrSize, i;

    cout<<"Please enter number of lines:"<<endl;
    cin>>textArrSize;
    cin.ignore(1); // getting rid of new line in the input

    textArr = new string[textArrSize];
    cout<<"Please enter "<<textArrSize<<" lines:"<<endl;
    for(i = 0; i < textArrSize; i += 1)
        getline(cin, textArr[i]);

    outTextArrSize = textArrSize;
    return textArr;
}

string* readText2(int& outTextArrSize){
    string* textArr;
    int textArrSize, textArrPhysicalSize;
    bool seenEmptyLine;
    string currLine;

    cout<<"Please enter a sequence of lines."<<endl;
    cout<<"To end the input, type an empty line"<<endl;

    textArr = new string[1];
    textArrSize = 0;
    textArrPhysicalSize = 1;

    seenEmptyLine = false;
    while(seenEmptyLine == false) {
        getline(cin, currLine);
        if (currLine == "")
            seenEmptyLine = true;
        else {
            if(textArrSize == textArrPhysicalSize){
                string* newTextArr;
                newTextArr = new string[2*textArrPhysicalSize];
                for(int i=0; i < textArrSize; i += 1)
                    newTextArr[i] = textArr[i];
                delete []textArr;
                textArr = newTextArr;
                textArrPhysicalSize *= 2;
            }
            textArr[textArrSize] = currLine;
            textArrSize += 1;
        }
    }

    outTextArrSize = textArrSize;
    return textArr;
}

int main_vector() {
    vector<string> textVector;

    textVector = readText3();

    cout<<"Your text is:"<<endl;
    for(int i=0; i < textVector.size(); i += 1)
        cout<<i+1<<". "<<textVector[i]<<endl;

    return 0;
}

vector<string> readText3(){
    vector<string> textVector;
    bool seenEmptyLine;
    string currLine;

    cout<<"Please enter a sequence of lines."<<endl;
    cout<<"To end the input, type an empty line"<<endl;

    seenEmptyLine = false;
    while(seenEmptyLine == false) {
        getline(cin, currLine);
        if (currLine == "")
            seenEmptyLine = true;
        else
            textVector.push_back(currLine);
    }

    return textVector;

}