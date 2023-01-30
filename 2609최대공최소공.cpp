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
    int a,b,result1,result2;
    cin >> a >> b;
    result1 = gcd(a,b);
    result2 = lcm(a,b);
    cout << result1 << '\n' << result2;
}