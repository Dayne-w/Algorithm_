#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a,b;
    cin >> a >> b;
    if(a-b < 0){
        cout << -(a-b);
    }else{
        cout << a-b;
    }
}