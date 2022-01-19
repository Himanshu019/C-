class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        for(int i=nums.size()-1; i > 0; i--){
            if(nums[i] != nums[i-1])
                v.push_back(nums[i]);
        }
        v.push_back(nums[0]);
        if(v.size() < 3)
            return v[0];
        else
            return v[2];
    }
};
