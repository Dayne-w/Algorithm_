#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int total = 0;
    cin >> n;
    int pay[n];
    for(int i = 0; i < n; i++){
        cin >> pay[i];
    }
    sort(pay, pay + sizeof(pay)/sizeof(*pay));
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            total += pay[j];
        }
    }
    cout << total;
    return 0;
}