class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size(), mx=-1, y;
        for(int i=n-1; i>=0; i--){
            y = arr[i];
            arr[i] = mx;
            mx = max(mx,y);
        }
        return arr;
    }
};
