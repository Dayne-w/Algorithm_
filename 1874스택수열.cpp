#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int count, num, j, k;
    int i = 1;
    string str;
    vector<char> v;
    stack<int> s;
    cin >> count;
    while(count--){ 
        cin >> num;
        if(s.empty() || s.top() < num){
            for( ; i <= num; i++){
                s.push(i);
                v.push_back('+');
            }
            if(s.empty()){
                str = "NO";
                continue;
            }
            s.pop();
            v.push_back('-');
        }else{
            j = s.top() - num;
            if(j < 0){
                str = "NO";
                continue;
            }else{
                while(j-- >= 0){ // num이랑 s.top()이랑 같은 경우도 생각.
                    if(s.empty()){ // 만약 스택에 비었는데 계속 내려가려고 하는 경우. 2 4 1 3 이런 경우
                        str = "NO";
                        break;
                    } else{
                        s.pop();
                        v.push_back('-');
                    }
                }
            }
        }
    }
    if(str.compare("NO") == 0){
        cout << str;
    } else {
        for(char ch : v){
            cout << ch << '\n';
        }
    }
}