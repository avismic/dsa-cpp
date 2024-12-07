#include<bits/stdc++.h>
using namespace std;

int findNextgap(int gap){
  gap = (gap*10)/13;
  if(gap<1){
    return 1;
  }
  return gap;
}

void combSort(int a[], int n){
  int gap = n;
  bool swapped = true;

  while(gap!=1||swapped==true){
    gap = findNextgap(gap);
    swapped=false;
    for(int i=0;i<n-gap;i++){
      if(a[i]>a[i+gap]){
        swap(a[i],a[i+gap]);
        swapped = true;
      }
    }
  }
}

int main(){
  int a[] = {1,6,3,8,9,2,34,5,8,2};
  int n = sizeof(a)/sizeof(a[0]);

  combSort(a,n);

  cout<<"Sorted array: ";
  for(int i=0;i<n;i++){
    cout<<a[i]<<' ';
  }
  return 0;
}