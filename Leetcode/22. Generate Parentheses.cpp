class Solution {
public:
    void solve(string s, int op, int cl, vector<string>& v){
        if(cl == 0){
            v.push_back(s);
            return;
        }
        string s1=s, s2=s;
        if(cl > op){
            s1 += ")";
            solve(s1, op, cl-1, v);
        }
        if(op){
            s2 += "(";
            solve(s2, op-1, cl, v);
        }
        
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        solve("", n, n, v);
        return v;
    }
};
