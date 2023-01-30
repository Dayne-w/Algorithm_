#include <iostream>

using namespace std;

bool prime(int num){
    if(num < 2){
        return false;
    }else{
        for(int i = 2; i*i <= num; i++){
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
    int a,b,num;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(prime(i)){
            cout << i << '\n';
        }
    }
}
