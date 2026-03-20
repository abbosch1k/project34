#include <iostream>
using namespace std;

int main(){
    string s,word="",maxWord="";
    getline(cin,s);

    for(char c:s){
        if(c==' '){
            if(word.size()>maxWord.size())
                maxWord=word;
            word="";
        } else word+=c;
    }

    if(word.size()>maxWord.size())
        maxWord=word;

    cout<<maxWord;
}
