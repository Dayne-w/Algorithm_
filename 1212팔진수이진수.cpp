#include <iostream>
#include <string>

using namespace std;

int main(){
    string num;
    int i = 0;
    getline(cin, num);
    if(num[0] == '0'){
        cout << "0";
        i++;
    }
    if(num[0] == '1'){
        cout << "1";
        i++;
    }else if(num[0] == '2'){
        cout << "10";
        i++;
    }else if(num[0] == '3'){
        cout << "11";
        i++;
    }
    for(; i < num.length(); i++){
        if(num[i] == '0'){
            cout << "000";
        }else if(num[i] == '1'){
            cout << "001";
        }else if(num[i] == '2'){
            cout << "010";
        }else if(num[i] == '3'){
            cout << "011";
        }else if(num[i] == '4'){
            cout << "100";
        }else if(num[i] == '5'){
            cout << "101";
        }else if(num[i] == '6'){
            cout << "110";
        }else if(num[i] == '7'){
            cout << "111";
        }
    }
}