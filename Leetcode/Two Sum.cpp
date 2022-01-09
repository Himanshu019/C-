class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for(int i = 1; i < nums.size(); i++){
            for(int j = 0; j < i; j++){
                if(nums[i] + nums[j] == target){
                    v.push_back(j);
                    v.push_back(i);
                }
            }
        }
        return v;
    }
};
