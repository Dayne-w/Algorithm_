#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m, num2, num5;
    long long countn2 = 0, countn5 = 0, countm2 = 0, countm5 = 0, countnm2 = 0, countnm5 = 0;
    cin >> n >> m;
    for(long long i = 2; i <= n; i *= 2){
        countn2 += n/i; 
    }
    for(long long i = 5; i <= n; i*= 5){
        countn5 += n/i;
    }
    for(long long i = 2; i <= m; i *= 2){
        countm2 += m/i; 
    }
    for(long long i = 5; i <= m; i*= 5){
        countm5 += m/i;
    }
    for(long long i = 2; i <= n-m; i *= 2){
        countnm2 += (n-m)/i; 
    }
    for(long long i = 5; i <= n-m; i*= 5){
        countnm5 += (n-m)/i;
    }
    num2 = countn2 - countm2 - countnm2;
    num5 = countn5 - countm5 - countnm5;
    if(num2 > num5){
        cout << num5;
    }else{
        cout << num2;
    }
}