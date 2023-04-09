#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[5];
    int sum = 0;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr+sizeof(arr)/sizeof(*arr));
    cout << sum/5 << '\n' << arr[2];
}