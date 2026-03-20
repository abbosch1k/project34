#include <iostream>
using namespace std;

int main(){
    string url;
    cin>>url;

    int pos = url.find("://");

    cout<<"Protocol: "<<url.substr(0,pos)<<endl;
    cout<<"Rest: "<<url.substr(pos+3);
}
