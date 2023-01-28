#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int count, num;
    stack<int> left, right, result;
    cin >> count;
    while(count--){
        cin >> num;
         left.push(num);
    }
    result.push(-1);
    right.push(left.top());
    left.pop();
    while(left.size()){
        if(left.top() < right.top()){
            result.push(right.top());
            right.push(left.top());
            left.pop();
        } else{
            right.pop();
            if(right.empty()){
                result.push(-1);
                right.push(left.top());
                left.pop();
            }
        }
    }
    while(result.size() - 1){
        cout << result.top() << ' ';
        result.pop();
    }
    cout << result.top();
    return 0;
}