class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& vec, int tar) {
        
        
        int ans = 0;
        
        for(auto it:vec){
            if(it >= tar) ans++;
        }
        
        return ans;
    }
};