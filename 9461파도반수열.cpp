#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t;
    long long arr[101];
    cin >> t;
    while(t--){
        cin >> n;
        arr[1] = 1;
        arr[2] = 1;
        arr[3] = 1;
        arr[4] = 2;
        arr[5] = 2;
        for(int i = 6; i <= n; i++){
            arr[i] = arr[i-5] + arr[i-1];
        }
        cout << arr[n] << '\n';
    }
}