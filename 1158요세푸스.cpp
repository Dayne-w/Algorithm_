#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    int index = 0;
    cin >> n >> k;
    int arr[n];
    vector<int> v;
    for(int i = 1; i <= n; i++){
        v.push_back(i);
    }
    while(n--){
        for(int j = 0; j < k-1; j++){
            if(v.size() == 1){
                index = 0;
                continue;
            }
            if(index > v.size()-1){
                index = 0;
            }
            else if(index == v.size()-1){
                index = 0;
                continue;
            }
            index++;
        }
        arr[n] = v.at(index); // 배열의 끝에서부터 처음 순서대로 숫자들을 넣는다.
        v.erase(v.begin() + index);
    }
    cout << "<";
    for(int i = sizeof arr / sizeof arr[0]; i > 0; i--){
        if(i == 1){
            cout << arr[0] << ">";
        }else{
            cout << arr[i-1] << ", ";
        }
    }
}