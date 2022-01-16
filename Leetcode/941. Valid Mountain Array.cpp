class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3)
            return false;
        int mx = max_element(arr.begin(),arr.end()) - arr.begin();
        if(mx==0 || mx==arr.size()-1)
            return false;
        
        for(int i=mx-1; i>=0; i--){
            if(arr[i] >= arr[i+1])
                return false;
        }
        for(int i=mx; i < arr.size()-1; i++){
            if(arr[i+1] >= arr[i])
                return false;
        }
        return true;
    }
};
