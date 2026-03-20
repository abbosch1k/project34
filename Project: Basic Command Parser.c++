#include <iostream>
using namespace std;

int main(){
    string cmd;
    cin>>cmd;

    if(cmd=="start") cout<<"System started";
    else if(cmd=="stop") cout<<"System stopped";
    else cout<<"Unknown command";
}
