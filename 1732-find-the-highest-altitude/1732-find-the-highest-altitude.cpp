class Solution {
public:
    int largestAltitude(vector<int>& vec) {
        int n = vec.size();

        int ans =0;
        int maxi = 0;

        for(auto it:vec){
            ans += it;
            maxi = max(maxi,ans);
        }
        
        return maxi;
    }
};