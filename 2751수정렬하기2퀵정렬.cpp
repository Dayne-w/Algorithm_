#include <iostream>

int arr[1000001];

using namespace std;

void exchange(int& a, int& b){
    int temp = b;
    b = a;
    a = temp;
}

int partition(int left, int right){
    int pivot = right;
    int small = left-1;
    for(int i = left; i < right; i++){
        if(arr[pivot] > arr[i]){
            small++;
            exchange(arr[small], arr[i]);
        }
    }
    exchange(arr[small+1], arr[right]);
    return small+1;
}

void quickSort(int left, int right){
    if(left < right){
        int pivot = partition(left, right);
        quickSort(left, pivot-1);
        quickSort(pivot+1, right);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    quickSort(1, n);
    for(int i = 1; i <= n; i++){
        cout << arr[i] << '\n';
    }
}