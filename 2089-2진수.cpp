#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num;
    stack<int> result;
    cin >> num;
    if(num == 0){
        cout << 0;
        return 0;
    }
    while(num != 0){
        if(num % -2 == 0){
            result.push(0);
            num /= -2;
        }else{
            result.push(1);
            num = (num-1) / -2;
        }
    }
    while(!result.empty()){
        cout << result.top();
        result.pop();
    }
    return 0;
}
