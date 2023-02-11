#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int count,num, temp;
    cin >> count;
    int arr[count+1], result[count+1];
    arr[0] = 0;
    for(int i = 1; i <= count; i++){
        cin >> arr[i];
    }
    result[0] = 0;
    result[1] = arr[1];
    result[2] = min(arr[1]+arr[1], arr[2]);
    for(int j = 3; j <= count; j++){
        temp = arr[1] + result[j-1];
        for(int k = 2; k <= j; k++){
            temp = min(arr[k] + result[j-k], temp);
        }
        result[j] = temp;
    }
    cout << result[count];
}