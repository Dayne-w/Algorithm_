#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[1000001] = {}; // num이 최대 1000000까지 될 수 있으므로, 배열의 인덱스를 1000001로 해준다.
    stack<int> left,right,result;
    int count, num;
    cin >> count;
    while(count--){
        cin >> num;
        arr[num] += 1; 
        left.push(num);
    }
    result.push(-1);
    right.push(left.top());
    left.pop();
    while(left.size()){
        if(arr[left.top()] < arr[right.top()]){
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
// 3 2 3 1