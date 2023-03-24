#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long result = 0;
    string str;
    vector<int> v;
    cin >> str;
    long long arr[str.length()+1];
    v.push_back(-1);
    for(int i = 0; i < str.length(); i++){
        int temp = str[i] - '0';
        v.push_back(temp);
    }
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 1; i < v.size(); i++){
        if(v[i] == 0){
	        if(v[i-1] == 1 || v[i-1] == 2){
		        arr[i] = arr[i-2] % 1000000;
	        }else{
		        cout << 0;
		        return 0;
	        }
        }else{
	        if(v[i-1] == 0){
		        arr[i] = arr[i-3] % 1000000;    // 1,20,5
	        }else{
		        if(v[i-1]*10 + v[i] >= 1 && v[i-1]*10 + v[i] <= 26){
			        arr[i] = (arr[i-1] + arr[i-2]) % 1000000;
		        }else{
			        arr[i] = arr[i-1] % 1000000;
		        }
	        }
        }
    }
    cout << arr[v.size()-1];
}