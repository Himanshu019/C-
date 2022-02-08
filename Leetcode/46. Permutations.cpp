class Solution {
public:
    void solve(vector<int>& nums, int in, vector<vector<int>>& v){
        if(in == nums.size()){
            v.push_back(nums);
            return;
        }
        for(int i=in; i < nums.size(); i++){
            swap(nums[in],nums[i]);
            solve(nums, in+1, v);
            swap(nums[in],nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v;
        solve(nums, 0, v);
        return v;
    }
};
