#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int count = 0;
    cin >> count;
    while(count--){
        cin >> n;
        int arr[n+1];
        arr[1] = 1;
        arr[2] = 2;
        arr[3] = 4;
        for(int i = 4; i <= n; i++){
            arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
        }
        cout << arr[n] << '\n';
    }
}
