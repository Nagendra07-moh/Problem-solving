class Solution {
    vector<int>dp;
    int find(vector<int>vec,int target){
        if(target == 0){
            return 1;
        }
        if(dp[target] != -1){
            return dp[target];
        }
        
        int ans = 0;
        
        
        for(auto it:vec){
            if(it <= target){
                ans += find(vec,target - it);
            }
        }
        
        
        return dp[target] = ans;
            
    }
public:
    int combinationSum4(vector<int>& vec, int target) {
        
        dp.resize(target+1);
        
        for(int i=0;i<=target;i++){
            dp[i] = -1;
        }
        dp[0]=1;
        
        find(vec,target);
        
        return dp[target];
        
        
    }
};