#include<iostream>
using namespace std;

bool binarySearch(int arr[][4],int rows, int cols, int key){
  int low = 0;
  int high = rows + cols - 1;

  while(low<=high){
    int mid = low + (high - low)/2;

    int midRow = mid/cols;
    int midCol = mid%cols;
    int midvalue = arr[midRow][midCol];

    if(midvalue==key){
      return true;
    }else if(midvalue<key){
      low = mid + 1;
    }else{
      high = mid - 1;
    }
  }
  return false;
}

int main(){
  int arr[3][4]={
    {1,3,5,7},
    {10,11,16,20},
    {23,30,34,60}
  };
  int key = 16;
  bool found = binarySearch(arr,3,4,key);

  if(found){
    cout<<"Element found"<<endl;
  }else{
    cout<<"Element not found"<<endl;
  }
  return 0;
}
