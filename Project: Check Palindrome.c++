#include <iostream>
using namespace std;

bool check(string s,int l,int r){
    if(l>=r) return true;
    if(s[l]!=s[r]) return false;
    return check(s,l+1,r-1);
}

int main(){
    string s;
    cin>>s;

    if(check(s,0,s.size()-1))
        cout<<"Yes";
    else
        cout<<"No";
}
