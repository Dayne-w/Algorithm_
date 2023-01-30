#include <iostream>

using namespace std;

bool prime(int num){
    bool find;
    if(num < 2){
        return false;
    } else{
        for(int i = 2; i <= num-1; i++){
            if(num%i == 0){
                return false;
            }
        }
        return true;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int count, num;
    int total = 0;
    cin >> count;
    while(count--){
        cin >> num;
        if(prime(num) == true){
            total += 1;
        }
    }
    cout << total;
}