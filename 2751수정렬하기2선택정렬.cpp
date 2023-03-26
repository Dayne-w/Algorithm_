#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n+1];
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for(int i = n; i >= 2; i--){
        int max = 0;
        int idx = 0, temp = 0;
        for(int j = 1; j <= i; j++){
            if(max < arr[j]){
                max = arr[j];
                idx = j;
            }
        }
        temp = arr[i];
        arr[i] = max;
        arr[idx] = temp;
    }
    
    for(int i = 1; i <= n; i++){
        cout << arr[i] << '\n';
    }
}