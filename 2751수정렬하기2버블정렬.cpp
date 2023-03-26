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
        for(int j = 1; j <= i-1; j++){
            int temp = 0;
            if(arr[j+1] < arr[j]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i = 1; i <= n; i++){
        cout << arr[i] << '\n';
    }
}