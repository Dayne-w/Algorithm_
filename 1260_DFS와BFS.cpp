#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int n, m, v;
bool check[1001];
int graph[1001][1001];

void DFS(int v){
    if(check[v] == false){
        cout << v << ' ';
    }
    check[v] = true;
    for(int i = 1; i <= n; i++){
        if(graph[v][i] == 1 && check[i] == false){
            DFS(i);
        }
    }
}

void BFS(int v){
    queue<int> q;
    check[v] = true;
    q.push(v);
    while(!q.empty()){
        int num = q.front();
        cout << num << " ";
        q.pop();
        for(int i = 1; i <= n; i++){
            if(graph[num][i] == 1 && check[i] == false){
                check[i] = true;
                q.push(i);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m >> v;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            graph[i][j] = 0;
        }
    }
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    DFS(v);
    memset(check, false, sizeof(check));
    cout << '\n';
    BFS(v);
    return 0;
}