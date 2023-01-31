class Solution {
public:
    int findGCD(vector<int>& vec) {
        
        int maxi = INT_MIN;
        int mini = INT_MAX;
        
        for(auto it:vec){
            maxi =  max(maxi,it);
            mini = min(mini,it);
        }
        
        return __gcd(maxi,mini);
        
    }
};