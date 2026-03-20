#include <iostream>
#include <queue>
using namespace std;

int main(){
    int graph[3][3]={{0,1,1},{1,0,0},{1,0,0}};
    bool visited[3]={false};

    queue<int> q;
    q.push(0);
    visited[0]=true;

    while(!q.empty()){
        int node=q.front();
        q.pop();

        cout<<node<<" ";

        for(int i=0;i<3;i++){
            if(graph[node][i] && !visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }
    }
}
