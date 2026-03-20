#include <iostream>
using namespace std;

int main(){
    int arr[6]={1,2,2,3,2,4};
    int x=2,count=0;

    for(int i=0;i<6;i++)
        if(arr[i]==x)
            count++;

    cout<<count;
}
