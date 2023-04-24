#include <iostream>
#include <string>
#include <queue>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    vector<int> result;
    queue<int> q;
    cin >> n;
    while(n--){
        int num;
        string str;
        cin >> str;
        if(str == "push"){
            cin >> num;
            q.push(num);
        }else if(str == "pop"){
            if(q.empty()){
                result.push_back(-1);
            }else{
                num = q.front();
                q.pop();
                result.push_back(num);
            }
        }else if(str == "size"){
            result.push_back(q.size());
        }else if(str == "empty"){
            if(q.empty()){
                result.push_back(1);
            }else{
                result.push_back(0);
            }
        }else if(str == "front"){
            if(q.empty()){
                result.push_back(-1);
            }else{
                result.push_back(q.front());
            }
        }else if(str == "back"){
            if(q.empty()){
                result.push_back(-1);
            }else{
                result.push_back(q.back());
            }
        }
    }
    for(int n : result){
        cout << n << '\n';
    }
}