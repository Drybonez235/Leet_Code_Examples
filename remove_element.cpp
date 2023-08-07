// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
// Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:
// Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
// Return k.

//WORKS!

//Time 2ms Beats 51.58%of users with C++ //Memory 8.71mb Beats 44.55%of users with C++

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size(); // i the length of the array.
        int count = 0; //can't be larger then the array //1
        for(int i= 0; i<length; i++){
            if(nums[i] != val){//1
                nums[i -(i - count)] = nums[i];
                count += 1;
            } else if(nums[i] == val){
            
            }
        }
    return count;
     }
};