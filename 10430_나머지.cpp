#include <iostream>

#define endl "\n"
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int A = 0, B = 0, C = 0;
    cin >> A >> B >> C;
    cout << (A+B)%C << endl;
    cout << ((A%C) + (B%C))%C << endl;
    cout << (A*B)%C << endl;
    cout << ((A%C) * (B%C)) % C;
}