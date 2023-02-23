#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int count;
    int sum = 0;
    cin >> count;
    int arr[count+1];
    for(int i = 1; i <= count; i++){
        cin >> arr[i];
    }
    int max = arr[1];
    for(int j = 1; j <=count; j++){
        sum += arr[j];
        if(arr[j] > sum){
            sum = arr[j];
        }
        if(sum > max){
            max = sum;
        }
    }
    cout << max;
    return 0;
}