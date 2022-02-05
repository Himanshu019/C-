class Solution {
public:
    bool check(vector<int> nums, int l, int r){
        sort(nums.begin()+l, nums.begin()+r+1);
        int d = nums[l+1] - nums[l];
        while(l < r){
            if(nums[l+1] - nums[l] != d)
                return false;
            l++;
        }
        return true;
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> v;
        for(int i=0; i<l.size(); i++)
            v.push_back(check(nums, l[i], r[i]));
        return v;
    }
};
