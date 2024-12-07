#include<bits/stdc++.h>
using namespace std;
void recursiveBubbleSort(int arr[], int n){
  if(n==1){
    return;
  }
  for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
      swap(arr[i],arr[i+1]);
    }
  }
  recursiveBubbleSort(arr,n-1);
}

void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(){
  int arr[] = {64,34,25,12,22,12,11,90};
  int n = sizeof(arr)/sizeof(arr[0]);
  recursiveBubbleSort(arr,n);
  printf("Sorted array: \n");
  printArray(arr,n);
  return 0;
}