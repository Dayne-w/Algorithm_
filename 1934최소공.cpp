#include<iostream>

using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    } else{
        return gcd(b, a%b);
    }
}

int lcm(int a, int b){
    int temp = a*b;
    int num = temp / gcd(a,b);
    return num;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int count, a,b,result;
    cin >> count;
    while(count--){
        cin >> a >> b;
        result = lcm(a,b);
        cout << result << '\n';
    }
}