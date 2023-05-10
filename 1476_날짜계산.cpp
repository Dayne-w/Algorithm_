#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int e, s, m;
    int year = 0;
    cin >> e >> s >> m;
    e--;
    s--;
    m--;
    while(!((year%15 == e) && (year%28 == s) && (year%19 == m))){
        year++;
    }
    cout << year+1;
    return 0;
}