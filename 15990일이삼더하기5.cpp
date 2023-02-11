#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long count,num;
    long long arr[100001][4] = {
        {0,0,0,0},
        {0,1,0,0},
        {0,0,1,0},
        {0,1,1,1}
    };
    cin >> num;
    while(num--){
        cin >> count;
        for(int i = 4; i <= count; i++){
            for(int j = 1; j <= 3; j++){
                if(j == 1){
                   arr[i][j] = (arr[i-1][2] + arr[i-1][3]) % 1000000009;
                }else if(j == 2){
                    arr[i][j] = (arr[i-2][1] + arr[i-2][3]) % 1000000009;
                }else{
                    arr[i][j] = (arr[i-3][1] + arr[i-3][2]) % 1000000009;
                }
            }
        }
        cout << (arr[count][1] + arr[count][2] + arr[count][3]) % 1000000009 << '\n';
    }
}