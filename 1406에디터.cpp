#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str, lastStr;
    int count, i, j, l, r; 
    stack<char> left, right;

    getline(cin, str); 
    for(char ch : str){     // 입력받은 문자열 왼쪽 스택에 다 push (커서 맨 오른쪽 있는 상황)
        left.push(ch);
    }

    cin >> count;
    
    while(count--){
        char command, word;
        cin >> command;
        if(command == 'L'){
            if(left.empty()){
                continue;
            }else{
                right.push(left.top());
                left.pop();
            }
        }
        else if(command == 'D'){
            if(right.empty()){
                continue;
            }else{
                left.push(right.top());
                right.pop();
            }
        }
        else if(command == 'B'){
            if(left.empty()){
                continue;
            }else{
                left.pop();
            }
        }
        else if(command == 'P'){
            cin >> word;
            left.push(word);
        }
    }

    l = left.size(); // left size 고정값
    for(i = 0; i < l; i++){ // 왼쪽 스택을 모두 오른쪽으로 옮기는 과정
        right.push(left.top());
        left.pop();
    }
    r = right.size(); // right size 고정값
    for(j = 0; j < r; j++){     // 오른쪽 스택을 모두 문자열로 바꿔주는 과정
        lastStr += right.top();
        right.pop();
    }
    cout << lastStr;
    return 0;
}