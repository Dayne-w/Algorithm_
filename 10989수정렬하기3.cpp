#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, num;
    cin >> n;
    int arr[10001] = {0,};
    for(int i = 0; i < n; i++){
        cin >> num;
        arr[num] += 1;
    }
    for(int i = 0; i <= 10000; i++){
        while(arr[i] != 0){
            cout << i << '\n';
            arr[i] -= 1;
        }
    }
}