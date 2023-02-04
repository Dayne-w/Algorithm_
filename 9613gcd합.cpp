#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }else{
        return gcd(b, a%b);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long n, num;
        long long total = 0;
        vector<long long> vec;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> num;
            vec.push_back(num);
        }
        if(vec.size() == 1){
            cout << vec.back();
            break;
        }
        while(vec.size()>0){
            for(int j = vec.size()-2; j >= 0; j--){
                total += gcd(vec.back(), vec[j]);
            }
            vec.pop_back();
        }
        cout << total << '\n';
    }
}
