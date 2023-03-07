#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int score = 0;
        int n;
        cin >> n;
        int arr[3][n+1]; // 행 1,2 / 열 1~n개
        int result[n+1][4]; // n번째 줄이 case1, case2, case3 으로 나뉘는 것
        for(int i = 1; i <= n; i++){
            cin >> arr[1][i];
        }
        for(int i = 1; i <= n; i++){
            cin >> arr[2][i];
        }
        result[1][1] = 0;
        result[1][2] = arr[1][1];
        result[1][3] = arr[2][1];
        for(int i = 2; i <= n; i++){
            result[i][1] = max(result[i-1][2], result[i-1][3]); // 아무것도 선택 안 하는 것
            result[i][2] = max(result[i-1][1]+arr[1][i], result[i-1][3]+arr[1][i]); // n번째 줄 위에 선택
            result[i][3] = max(result[i-1][1]+arr[2][i], result[i-1][2]+arr[2][i]); // n번째 줄 아래 선택
        }
        for(int i = 1; i <= 3; i++){
            if(score < result[n][i]){
                score = result[n][i];   
            }
        }
        cout << score << '\n';
    }
}