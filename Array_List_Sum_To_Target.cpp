class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();
        vector<int> answer;
        for(int i=0; i < length; i++){

                for(int x=0; x < length; x++){
                    if(i != x){
                        if(nums[i] + nums[x] == target){
                            answer.push_back(x);
                            answer.push_back(i);
                            return answer;
                        }
                    }
                }
            
        }
        return answer;
    }
}
