#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,3,2,5,4};
    int k=3;

    for(int i=0;i<=5-k;i++){
        int max=arr[i];
        for(int j=i;j<i+k;j++)
            if(arr[j]>max)
                max=arr[j];

        cout<<max<<" ";
    }
}
