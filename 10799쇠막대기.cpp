#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int total = 0;
    string str;
    stack<char> s;
    getline(cin, str);
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '('){
            s.push(str[i]);
        } else if(str[i] == ')') {
            if(str[i-1] == '('){
                s.pop();
                total += s.size();
            }
            else{
                total += 1;
                s.pop();
            }
        }
    }
    cout << total;
}