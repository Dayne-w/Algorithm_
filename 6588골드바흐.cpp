#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[1000000];
    bool check[1000001];
    int num=0;
    for(int i = 2; i < 1000000; i++){
        if(check[i]==false){
            arr[num++] = i;
            for(int j = i + i; j < 1000000; j += i){
                check[j] = true;
            }
        }
    }
    while(true){
        int even;
        cin >> even;
        if(even == 0){
            break;
        }
        for(int i = 1; i < num; i++){
            if(check[even - arr[i]] == false){ // 입력한 짝수 - 저장된 소수 = 저장된 소수 -> 출력.
                cout << even << " = " << arr[i] << " + " << even - arr[i] << '\n';
                break;
            }
        }
    }
    return 0;
}

