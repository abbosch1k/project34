#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> cache;
    int size = 3;
    int arr[5]={1,2,3,2,4};

    for(int i=0;i<5;i++){
        cache.remove(arr[i]);
        cache.push_front(arr[i]);

        if(cache.size()>size)
            cache.pop_back();
    }

    for(int x:cache)
        cout<<x<<" ";
}
