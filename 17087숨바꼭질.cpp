#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b){
    while(1){
        if(b == 0){
            return a;
        }
        int r = a%b;
        a = b;
        b = r;
    }
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s, location;
    int result = 999999999;
    vector<int> vec;
    cin >> n >> s;
    while(n--){
        cin >> location;
        int sub = location - s;
        if(sub < 0){
            vec.push_back(-sub);
        }else{
            vec.push_back(sub);
        }
    }
    if(vec.size() == 1){
        result = vec[0];
    }else if(vec.size() == 2){
        result = gcd(vec[0], vec[1]);
    }else {
        result = gcd(vec[0], vec[1]);
        for(int i = 2; i < vec.size(); i++){
            result = gcd(result, vec[i]);
        }
    }
    cout << result;
    return 0;
}