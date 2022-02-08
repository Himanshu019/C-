class Solution {
public:
    vector<int> op;
    
    void solve(vector<int>& nums, int i, vector<vector<int>>& v){
        v.push_back(op);
        for(int j=i; j < nums.size(); j++){
            if(j > i && nums[j] == nums[j-1])
                continue;
            op.push_back(nums[j]);
            solve(nums, j+1, v);
            op.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        solve(nums, 0, v);
        return v;
    }
};
