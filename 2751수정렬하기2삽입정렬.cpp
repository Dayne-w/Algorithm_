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

    for(int i = 2; i <= n; i++){
        int idx = 0;
        int temp = arr[i];
        for(int j = i-1; j >= 1; j--){
            if(temp < arr[j]){
                arr[j+1] = arr[j];
                idx = j;
            }
        }
        arr[idx] = temp;
    }
    
    for(int i = 1; i <= n; i++){
        cout << arr[i] << '\n';
    }
}
