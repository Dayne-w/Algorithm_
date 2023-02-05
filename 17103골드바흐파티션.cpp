#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int count, num;
    vector<int> vec;
    cin >> count;
    while(count--){
        cin >> num;
        int arr[num]; //소수 저장하는 배열
        bool check[num+1];
        fill_n(check, num+1, false);
        int arrn = 0;
        float total = 0;
        for(int i = 2; i <= num; i++){
            if(check[i] == false){
                arr[arrn++] = i;
                for(int j = i + i; j <= num; j += i){
                    check[j] = true;
                }
            }
        }
        for(int i = 0; i < arrn; i++){
            if(check[num - arr[i]] == false){
                if(num - arr[i] == arr[i]){
                    total += 1;
                }else{
                    total += 0.5;
                }
            }
        }
        cout << (int)total << '\n';
        vec.clear();
    }
}
