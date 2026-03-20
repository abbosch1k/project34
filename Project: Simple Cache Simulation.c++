#include <iostream>
using namespace std;

int main(){
    int cache[3]={-1,-1,-1};
    int x;

    for(int i=0;i<5;i++){
        cin>>x;
        cache[i%3]=x;
    }

    for(int i=0;i<3;i++)
        cout<<cache[i]<<" ";
}
