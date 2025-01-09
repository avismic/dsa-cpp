//naive-approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==target-nums[i]){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

//hashmap approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int complement = target - nums[i];
            if(hash.find(complement)!=hash.end() && hash[complement]!=i){
                return{i,hash[complement]};
            }
        }
        return {};
    }
};

//hashmap using only one for loop
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        for(int i=0;i<nums.size();i++){
            int complement = target - nums[i];
            if(umap.find(complement)!=umap.end()){
                return {umap[complement],i};
            }
            umap[nums[i]]=i;
        }
        return {};
    }
};