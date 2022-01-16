class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0, j=nums.size()-1;
        while(i <= j){
            int k = (i+j)/2;
            if(nums[k] > target)
                j = k-1;
            else if(nums[k] == target)
                return k;
            else
                i = k+1;
        }
        return -1;
    }
};
