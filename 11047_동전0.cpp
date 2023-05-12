#include <iostream>

using namespace std;

int arr[10];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    int result = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = n-1; k != 0; i--){
        while(arr[i] <= k){
            k -= arr[i];
            result += 1;
        }
    }
    cout << result;
}