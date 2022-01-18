class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int x=0, c=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0)
                nums[x++] = nums[i];
            else    c++;
        }
        for(int i=nums.size()-c; i < nums.size(); i++)
            nums[i] = 0;
    }
};
