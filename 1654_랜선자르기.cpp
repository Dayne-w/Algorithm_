#include <iostream>

using namespace std;

int k, n;
int arr[10001];
int maxi = 0;
long long low, high, mid;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int result = 0;
    cin >> k >> n;
    for(int i = 1; i <= k; i++){
        cin >> arr[i];
        if(maxi < arr[i]){
            maxi = arr[i];
        }
    }
    low = 1;
    high = maxi;
    while(!(low > high)){
        mid = (low + high) / 2;
        int count = 0;
        for(int i = 1; i <= k; i++){
            count += arr[i] / mid;
        }
        if(count >= n){
            low = mid + 1;
            if(result < mid){
                result = mid;
            }
        }else{
            high = mid -1;
        }
    }
    cout << result;
}