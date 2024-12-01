#include<iostream>
using namespace std;

void insertElement(int arr[],int n, int x, int pos){
    for(int i=n-1;i>=pos;i--){
      arr[i+1]=arr[i];
    }
    arr[pos]=x;
  }

int main(){
  int arr[] = {1,2,3,4,6,7,8};
  int n =  sizeof(arr)/sizeof(arr[0]);
  int x = 5;
  int pos = 4;
  insertElement(arr,n,x,pos);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}