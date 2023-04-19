#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int idx = 0;
    stack<int> s;
    int result[10001] = {0,};
    cin >> n;
    while(n--){
        int num;
        string str;
        cin >> str;
        if(str == "push"){
            cin >> num;
            s.push(num);
        }else if(str == "pop"){
            if(s.empty()){
                result[idx++] = -1;
            }else{
                result[idx++] = s.top();
                s.pop();
            }
        }else if(str == "size"){
            result[idx++] = s.size();
        }else if(str == "empty"){
            if(s.empty()){
                result[idx++] = 1;
            }else{
                result[idx++] = 0;
            }
        }else if(str == "top"){
            if(s.empty()){
                result[idx++] = -1;
            }else{
                result[idx++] = s.top();
            }
        }
    }
    for(int i = 0; i < idx; i++){
        cout << result[i] << '\n';
    }
}