class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int start = 0;
        int end = nums.size()-1;

        for(int i = 0 ; i < nums.size() ; i++){

            if(nums[start]+nums[end] == target){
                return {start+1 , end+1};
            }
            else if(nums[start]+nums[end] > target){
                end--;
            }
            else{
                start++;
            }

        }
        return {};
    }
};
