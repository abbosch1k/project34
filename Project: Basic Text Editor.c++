#include <iostream>
#include <stack>
using namespace std;

int main(){
    string text="";
    stack<string> history;
    int choice;

    while(true){
        cin>>choice;

        if(choice==1){
            string add;
            cin>>add;
            history.push(text);
            text+=add;
        }
        else if(choice==2){
            int k;
            cin>>k;
            history.push(text);
            text.erase(text.size()-k);
        }
        else if(choice==3){
            int pos;
            cin>>pos;
            cout<<text[pos-1]<<endl;
        }
        else if(choice==4){
            text=history.top();
            history.pop();
        }
    }
}
