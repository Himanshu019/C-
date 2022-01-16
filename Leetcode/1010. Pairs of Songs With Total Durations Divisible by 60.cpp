class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int a[60]={0}, c=0;
        for(int i=0; i<time.size(); i++)
            a[time[i]%60]++;
        for(int i=1; i<30; i++)
            c += a[i]*a[60-i];
        return c + a[0]*(a[0]-1)/2 + a[30]*(a[30]-1)/2;
    }
};
