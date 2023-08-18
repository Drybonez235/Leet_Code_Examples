// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

#include <iostream>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int length = nums.size();
       if(length == 1){
           return nums[0];
       }
       std::sort (nums.begin(), nums.begin() + length);

    //    for(int x=0; x < length; x++){
    //        cout << nums[x] << endl;
    //    }
        int index = 0;
       while(index < length){
           if(index == length - 1){
               return nums[index];
           }
           if(nums[index] != nums[index+1]){
               return nums[index];
           }
           index += 2;
       }
       return nums[length];
    }
};