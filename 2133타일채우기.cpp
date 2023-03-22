#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[31];
    int n;
    cin >> n;
    for(int i = 1; i <= 30; i+=2){
        arr[i] = 0;
    }
    arr[0] = 1;
    arr[2] = 3;
    for(int i = 4; i <= 30; i+=2){
        int total = 0;
        for(int j = 0; j < i-2; j+=2){
            total = total + (arr[j] * 2);
        }
        arr[i] = arr[i-2] * arr[2] + total;
    }

    cout << arr[n];
}