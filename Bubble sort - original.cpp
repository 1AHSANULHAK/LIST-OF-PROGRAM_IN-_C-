#include<iostream>

using namespace std;

void bubble_sort_naive(int* arr,int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n-1;j++){
            if ( arr[j] > arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
}

// optimized using flag
void bubble_sort_fast(int* arr,int n){

    for (int i=0; i<n; i++){
        int flag = 0;
        for (int j=0; j<n-1;j++){
            if ( arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                flag = 1;
            }
        }
        if (!flag) break;
    }
}

int main() {
    int arr[5] = {9,4,5,1,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    // bubble_sort_naive(arr,n);
    bubble_sort_fast(arr,n);
    for (int i=0; i< n;i++ ) {
        cout <<arr[i]<<" ";
    }


}