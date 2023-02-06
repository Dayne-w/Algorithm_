#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[1000001];
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    for(int i = 4; i <= n; i++){   
        if(i%6 == 0){  
            arr[i] = min({arr[i/2]+1, arr[i/3]+1, arr[i-1]+1});
        }else if(i%3 == 0){
            arr[i] = min({arr[i-1] + 1, arr[i-2] + 2, arr[i/3] + 1});
        }else if(i%2 == 0){
            arr[i] = min({arr[i-1] + 1, arr[i-2] + 2, arr[i/2]+1});
        }else{
            arr[i] = min(arr[i-1] + 1, arr[i-2] + 2);
        }
    }
    cout << arr[n];
}
