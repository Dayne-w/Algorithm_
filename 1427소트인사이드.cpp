#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[10] = {0};
    string str;
    getline(cin, str);
    for(int i = 0; i < str.length(); i++){
        int num = str[i] - '0';
        arr[num] += 1;
    }
    for(int i = 9; i >= 0; i--){
        while(arr[i] != 0){
            cout << i;
            arr[i] -= 1;
        }
    }
}