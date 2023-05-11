#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m, k, result;
    cin >> n >> m >> k;
    for(int i = k; i > 0; i--){
        if((n-1)/2 >= m){
            n--;
        }else{
            m--;
        }
    }
    result = n/2 >= m ? m : n/2;
    cout << result;
    return 0;
}