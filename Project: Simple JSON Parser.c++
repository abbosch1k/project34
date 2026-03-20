#include <iostream>
using namespace std;

int main(){
    string json = "{\"name\":\"John\"}";

    int start = json.find(":\"")+2;
    int end = json.find("\"", start);

    cout << json.substr(start, end-start);
}
