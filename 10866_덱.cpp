#include <iostream>
#include <string>
#include <vector>
#include <deque>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    deque<int> d;
    vector<int> result;
    cin >> n;
    while(n--){
        int num;
        string str;
        cin >> str;
        if(str == "push_front"){
            cin >> num;
            d.push_front(num);
        }else if(str == "push_back"){
            cin >> num;
            d.push_back(num);
        }else if(str == "pop_front"){
            if(d.empty()){
                result.push_back(-1);
            }else{
                num = d.front();
                d.pop_front();
                result.push_back(num);
            }
        }else if(str == "pop_back"){
            if(d.empty()){
                result.push_back(-1);
            }else{
                num = d.back();
                d.pop_back();
                result.push_back(num);
            }
        }else if(str == "size"){
            result.push_back(d.size());
        }else if(str == "empty"){
            if(d.empty()){
                result.push_back(1);
            }else{
                result.push_back(0);
            }
        }else if(str == "front"){
            if(d.empty()){
                result.push_back(-1);
            }else{
                result.push_back(d.front());
            }
        }else if(str == "back"){
            if(d.empty()){
                result.push_back(-1);
            }else{
                result.push_back(d.back());
            }
        }
    }
    for(int n : result){
        cout << n << '\n';
    }
}