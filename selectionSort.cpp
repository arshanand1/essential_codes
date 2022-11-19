#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> arr, int n){
    for(int i =0;i<n-1;i++){
        int minIndex=i;
        for(int j =i+1;j<n;j++){
            if(arr[j] < arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
}
int main(){
    vector<int> arr;
    arr={2,6,7,8,5,3,5,6};
    int n=arr.size();
    selectionSort(arr,n);
    return 0;
}