#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n){
  for(int i=1;i<n;++i){
    int key = a[i];
    int j = i-1;
    while(j>=0 && a[j]>key){
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=key;
  }
}

void printArray(int a[],int n){
  for(int i=0;i<n;++i){
    cout<<a[i]<<" ";
  }
}

int main(){
  int a[] = {1,2,4,6,3,4,8,6,4,9,7,1};
  int n = sizeof(a)/sizeof(a[0]);

  insertionSort(a,n);
  printArray(a,n);

  return 0;
}