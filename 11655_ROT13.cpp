#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string str;
    getline(cin, str);
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            continue;
        }else if(str[i] >= 48 && str[i] <= 57){
            continue;
        }else if(str[i] >= 65 && str[i] <= 90){
            if(str[i] - 'A' >= 0 && str[i] - 'A' <= 12){
                str[i] = (char)(str[i] + 13);
            } else{
                str[i] = (char)(str[i] - 13);
            }
        }else{
            if(str[i] - 'a' >= 0 && str[i] - 'a' <= 12){
                str[i] = (char)(str[i] + 13);
            } else{
                str[i] = (char)(str[i] - 13);
            }
        }
    }
    for(int i = 0; i < str.length(); i++){
        cout << str[i];
    }
    return 0;
}