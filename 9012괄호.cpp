#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num;
    int i;
    cin >> num;
    cin.ignore();
    while(num--){
        int a = 0;
        string bracket;
        stack<char> s;
        getline(cin, bracket);
        for(char ch : bracket){
            if(ch == ')'){
                if(s.empty()){  // 스택에 여는 괄호 모자란 상황
                    cout << "NO" << '\n';
                    a = 1;
                    break;
                } else {
                    s.pop();
                }
            } else{
                s.push(ch);
            }
        }
        if(a == 1){
            continue;
        }
        if(!s.empty()){    // 스택에 여는 괄호 남는 상황
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
        }
    }
}