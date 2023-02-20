#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n+1];
    int result[n+1];
    arr[0] = 0;
    result[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    int answer = 0;
    for(int j = 1; j <= n; j++){
        result[j] = 1;
        for(int k = 1; k < j; k++){
            if(arr[k] < arr[j]){
                result[j] = max(result[j], result[k] + 1);
            }
        }
        answer = max(answer, result[j]);
    }
    cout << answer;
    return 0;
}
