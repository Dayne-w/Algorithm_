#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num;
    int count = 0;
    cin >> num;
    for(int i = 1; i <= num; i++){
        if(i % 5 == 0){
            count += 1; 
        }
        if(i % 25 == 0){
            count += 1;
        }
        if(i % 125 == 0){
            count += 1;
        }
    }
    cout << count;
}
