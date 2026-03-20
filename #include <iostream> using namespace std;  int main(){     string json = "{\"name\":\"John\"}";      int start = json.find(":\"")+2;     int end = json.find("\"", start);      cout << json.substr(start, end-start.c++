#include <iostream>
using namespace std;

int main(){
    string email;
    cin>>email;

    if(email.find('@')!=string::npos && email.find('.')!=string::npos)
        cout<<"Valid";
    else
        cout<<"Invalid";
}
