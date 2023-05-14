#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string str;
    while(getline(cin, str)){
        int small = 0, big = 0, num = 0, space = 0;
        for(int i = 0; i < str.length(); i++){
            if(str[i] == ' '){
                space += 1;
            }else if(str[i] - '0' >= 0 && str[i] - '0' <= 9){
                num += 1;
            }else if(str[i] - 'a' >= 0 && str[i] - 'a' <= 25){
                small += 1;
            }else{
                big += 1;
            }
        }
        cout << small << ' ' << big << ' ' << num << ' ' << space << '\n';
    }
}