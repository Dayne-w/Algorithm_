#include <iostream>
#include <string>

using namespace std;

int main(){
    string num;
    getline(cin, num);
    int i = 0;
    if(num.length() % 3 == 1){
        cout << num[0];
        i = 1;
    }else if(num.length() % 3 == 2){
        cout << ((num[0] - '0') * 2 + (num[1] - '0') * 1);
        i = 2;
    }
    for(; i < num.length(); i += 3){
        cout << ((num[i] - '0') * 4) + ((num[i+1] - '0') * 2) + ((num[i+2] - '0') * 1);
    }
    return 0;
}
