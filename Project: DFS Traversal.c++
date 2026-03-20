#include <iostream>
using namespace std;

int visited[3]={0};
int graph[3][3]={{0,1,1},{1,0,1},{1,1,0}};

void dfs(int node){
    visited[node]=1;
    cout<<node<<" ";

    for(int i=0;i<3;i++)
        if(graph[node][i] && !visited[i])
            dfs(i);
}

int main(){
    dfs(0);
}
