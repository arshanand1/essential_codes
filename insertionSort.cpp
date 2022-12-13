#include <bits/stdc++.h> 
using namespace std;
void insertionSort(int n, vector<int> &arr){
    for(int i=1; i<n; i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
}
int main(){
    vector<int> arr;
    arr={2,6,7,8,5,3,5,6};
    int n=arr.size();
    insertionSort(n,arr);
    return 0;
}
