#include <iostream>
using namespace std;

int hashTable[10]={0};

int hashFunc(int key){
    return key%10;
}

int main(){
    int key=25;
    hashTable[hashFunc(key)]=key;

    cout<<hashTable[5];
}
