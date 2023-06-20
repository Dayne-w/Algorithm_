#include <iostream>
#include <list>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    list<int> l;
    list<int>::iterator cur;
    int n,k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        l.push_back(i);
    }
    cur = l.begin();
    while(l.size() > 1){
        for(int i = 0; i < k-1; i++){
            cur++;
            if(cur == l.end()){
                cur = l.begin();
            }
        }
        cout << *cur << ", ";
        cur = l.erase(cur);
        if(cur == l.end()){
            cur = l.begin();
        }
    }
    return 0;
}