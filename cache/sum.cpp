// Using brute force

#include <iostream>
#include <vector>
using std::cout;
using std::vector;

 vector<int> bruteForceSum(){
    vector<int> nums{2,7,15,11};
    int target = 9;
    vector<int> result(2);
    for (int i = 0; i < nums.size(); i++)
    {
      for (int j = i+1; j < nums.size(); j++)
      { 
        if (nums[i] == target - nums[j])
        {
         
          cout << "Found match";
            result[0] = i;
            result[1] = j;
          break; 
        } 
      }   
    } 
   return result;
  } 

int main(){
 bruteForceSum();
}