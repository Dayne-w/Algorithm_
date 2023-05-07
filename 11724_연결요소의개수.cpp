#include <iostream>
#include <vector>

using namespace std;

int result = 0;
int n, m;
int graph[1001][1001];
bool check[1001];

void dfs(int v){
    check[v] = true;
    for(int i = 1; i <= n; i++){
        if(graph[v][i] == 1 && check[i] == false){
            dfs(i);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 1; i < 1001; i++){
        for(int j = 1; j < 1001; j++){
            graph[i][j] = 0;
        }
    }
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    for(int i = 1; i <= n; i++){
        if(check[i] == false){
            dfs(i);
            result += 1;
        }else{
            continue;
        }
    }
    cout << result;
}
