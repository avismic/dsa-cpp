#include<iostream>
using namespace std;

int findElement(int arr[],int n,int key){
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      return i;
    }
  }
  return -1;
}

int deleteElement(int arr[],int n,int key){
  int pos = findElement(arr,n,key);
  if(pos==-1){
    cout<<"Element not found"<<endl;
    return n;
  }
  for(int i=pos;i<n-1;i++){
    arr[i]=arr[i+1];
  }
  return n-1;
}

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9};
  int n = sizeof(arr)/sizeof(arr[0]);
  int key = 5;

  cout<<"Array before deletion:";
  for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
  }
  cout<<endl;

  n = deleteElement(arr,n,key);

  cout<<"Array after deletion: ";
  for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
  }
  cout<<endl;

  return 0;
}