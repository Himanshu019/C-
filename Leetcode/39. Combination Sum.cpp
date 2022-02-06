class Solution {
public:
    vector<int> op;
    int s;
    vector<vector<int>> v;
    void solve(vector<int> c, int i, int target){
        if(s == target){
            v.push_back(op);
            return;
        }
        
        if(i==c.size() || s > target)
            return;
        
        op.push_back(c[i]);
        s += c[i];
        solve(c, i, target);
        op.pop_back();
        s -= c[i];
        solve(c, i+1, target);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        s=0;
        sort(candidates.begin(), candidates.end());
        solve(candidates, 0, target);
        return v;
    }
};
