#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

// TC - O(N) :: SC - O(N) 
int singleNumber(vector<int>& nums){
    unordered_map<int, int> umap;
    for (auto x : nums)
        umap[x]++; 
    for (auto z : umap)
        if(z.second ==1)
          return z.first;
return -1;        
}

// TC - O(NlogN) :: SC - O(1) sorting helps with constant space complexity
int singleNumber_cspace(vector<int>& nums){
    sort(nums.begin(),nums.end());
    for(int i = 0; i<nums.size(); i+=2){
        if(nums[i] != nums[i+1])
        return nums[i];
    }
    return nums[nums.size()-1];
}

int singleNumber_bit(vector<int>& nums) { 
       int ans=0;
	   for(auto x:nums)
	   ans^=x;
	   return ans;
    }
int main(){
   
   vector<int> vect{1,4,1,2,3,3,2}; 
  int result = singleNumber_bit(vect);
    cout << result;
}

