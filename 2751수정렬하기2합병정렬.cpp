#include <iostream>

int arr[1000001];

using namespace std;

void merge(int data[], int p, int q, int r){
    int i = p, j = q+1, k = p;
    while(i <= q && j <= r){
        if(data[i] <= data[j]){
            arr[k++] = data[i++];
        }else{
            arr[k++] = data[j++];
        }
    }
    while(i <= q){
        arr[k++] = data[i++];
    }
    while(j <= r){
        arr[k++] = data[j++];
    }
    for(int i = p; i <= r; i++){
        data[i] = arr[i];
    }
}

void mergeSort(int data[], int p, int r){
    int q = (p+r)/2;
    if(p < r){  
        mergeSort(data, p, q);
        mergeSort(data, q+1, r);
        merge(data, p, q, r);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n+1];
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    mergeSort(arr, 1, n);
    for(int i = 1; i <= n; i++){
        cout << arr[i] << '\n';
    }
}