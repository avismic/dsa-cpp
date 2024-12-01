#include<iostream>
using namespace std;

void findElement(int arr[],int n, int key){
  bool found = false;
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      found = true;
      break;
    }
  }
  if(found){
    cout<<"Element found"<<endl;
  }else{
    cout<<"Element not found"<<endl;
  }
}

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9};
  int n = sizeof(arr)/sizeof(arr[0]);
  int key = 80;

  findElement(arr,n,key);

  return 0;
}