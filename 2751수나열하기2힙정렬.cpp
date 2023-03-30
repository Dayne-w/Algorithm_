#include <iostream>

int arr[1000001];

using namespace std;

void heapify(int cur, int n){
    int curIdx = cur;
    int left = cur*2;
    int right = cur*2 + 1;
    if((left <= n) && (arr[left] > arr[curIdx])){
        curIdx = left;
    }
    if((right <= n) && (arr[right] > arr[curIdx])){
        curIdx = right;
    }
    if(curIdx != cur){
        swap(arr[curIdx], arr[cur]);
        heapify(curIdx, n);
    }
}

void buildHeap(int n){
    for(int i = n/2; i >= 1; i--){
        heapify(i, n);
    }
}

void heapSort(int n){
    buildHeap(n);
    for(int i = n; i >= 2; i--){
        swap(arr[i], arr[1]);
        heapify(1,i-1);
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
    heapSort(n);
    for(int i = 1; i <= n; i++){
        cout << arr[i] << '\n';
    }
}