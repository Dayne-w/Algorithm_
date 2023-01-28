#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int index = 0;
    int l;
    string str,lastStr;
    stack<char> s;
    getline(cin, str);
    str += '\n';
    while(str[index] != '\n'){
        if(str[index] == '<'){
            while(str[index] != '>'){
                lastStr += str[index++];
            }
            lastStr += '>';
            index++;
        }else{
            for(; str[index] != ' ' && str[index] != '\n' && str[index] != '<'; index++){
                s.push(str[index]);
            }
            while(s.size()){
                lastStr += s.top();
                s.pop();
            }
            if(str[index] == '\n' || str[index] == '<'){
                continue;
            }
            lastStr += ' ';
            index++;
        }
    }
    cout << lastStr;
}