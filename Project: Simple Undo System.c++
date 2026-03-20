#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> history;
    string action;

    for(int i=0;i<3;i++){
        cin >> action;
        history.push(action);
    }

    cout<<"Undo: "<<history.top();
}
