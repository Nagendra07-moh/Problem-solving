class Solution {
public:
    int singleNumber(vector<int>& vec) {
        unordered_map<int,int>mp;
        
        for(auto it:vec){
            mp[it]++;
        }
        
        int ans ;
        for(auto it:mp){
            if(it.second == 1){
                ans = it.first;
            }
        }
        
        
        return  ans;
        
        
    }
};