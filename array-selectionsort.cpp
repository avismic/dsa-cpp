#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
  for(int i=0;i<n-1;++i){
    int min_index = i;
    for(int j=i+1;j<n;++j){
      if(arr[j]<arr[min_index]){
        min_index = j;
      }
    }
    swap(arr[i], arr[min_index]);
  }
}

int main(){
  int arr[] = {1,7,5,4,9,3,6,2};
  int n = sizeof(arr)/sizeof(arr[0]);
  selectionSort(arr,n);

  cout<<"Sorted array: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}