class Solution {
public:
    void solve(vector<int> in, vector<int> op, map<vector<int>,int>& mp, vector<vector<int>>& v){
        if(in.size() == 0){
            if(mp[op] == 0){
                v.push_back(op);
                mp[op]++;
            }
            return;
        }
        vector<int> op1=op, op2=op;
        op2.push_back(in[0]);
        in.erase(in.begin());
        solve(in, op1, mp, v);
        solve(in, op2, mp, v);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> v;
        map<vector<int>, int> mp;
        vector<int> op;
        sort(nums.begin(),nums.end());
        solve(nums, op, mp, v);
        return v;
    }
};
