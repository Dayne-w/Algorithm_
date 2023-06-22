#include <iostream>
#include <string>
#include <numeric>

#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long A, B;
    cin >> A >> B;
    int temp = gcd(A, B);
    if(temp == 0){
        if(A < B){
            for(int i = 0; i < A; i++){
                cout << 1;
            }
        }else{
            for(int i = 0; i < B; i++){
                cout << 1;
            }
        }
    }else{
        for(int i = 0; i < temp; i++){
            cout << 1;
        }
    }
}