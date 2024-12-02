#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>

using namespace std;
vector<int> flatten_3d_array(vector<vector<vector<int>>>& array_3d){
  vector<int> flat_array;
  for (auto& matrix : array_3d){
    for (auto& row :matrix){
      for(auto& element : row){
        flat_array.push_back(element);
      }
    }
  }
  return flat_array;
}

int binary_search(vector<int>& array, int target){
  int low = 0;
  int high = array.size() - 1;

  while(low<=high){
    int mid=low+(high-low)/2;
    if(array[mid]==target){
      return mid;
    }else if (array[mid]<target){
      low = mid + 1;
    }else {
      high = mid - 1;
    }
  }
  return -1;
}

tuple<int, int, int> locate_index_in_3d(int index, vector<vector<vector<int>>>& array_3d){
  int dim2_size = array_3d[0].size();
  int dim3_size = array_3d[0][0].size();

  int i = index/(dim2_size*dim3_size);
  int j = (index%(dim2_size*dim3_size))/dim3_size;
  int k = (index%(dim2_size*dim3_size))%dim3_size;

  return make_tuple(i,j,k);
}

int main(){
  vector<vector<vector<int>>> array_3d = {
    {{1,2,3}, {4,5,6}},
    {{7,8,9}, {10,11,12}}
  };

  vector<int> flat_array = flatten_3d_array(array_3d);
  sort(flat_array.begin(), flat_array.end());

  int target = 67;
  int index = binary_search(flat_array,target);

  if(index !=-1){
    auto[i,j,k] = locate_index_in_3d(index, array_3d);
    cout<<"target: "<<target<<" found at: ("<<i<<", "<<j<<", "<<k<<")"<<endl;
  } else {
    cout<<"target: "<<target<<" not found"<<endl;
  }

  return 0;
}