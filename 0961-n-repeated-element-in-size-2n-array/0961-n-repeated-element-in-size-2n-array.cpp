class Solution {
public:
    int repeatedNTimes(vector<int>& vec) {
        
        int n =vec.size()/2;
        
        unordered_map<int,int>mp;
        
        for(auto it:vec){
            mp[it]++;
        }
        
        
        int ans = 0;
        for(auto it:mp){
            if(it.second == n){
                ans = it.first;
            }
        }
        
        return ans;
        
    }
};