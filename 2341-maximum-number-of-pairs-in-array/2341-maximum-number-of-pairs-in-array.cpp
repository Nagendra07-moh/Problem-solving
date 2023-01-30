class Solution {
public:
    vector<int> numberOfPairs(vector<int>& vec) {
        
        unordered_map<int,int>mp;

        for(auto it:vec){
            mp[it]++;
        }

        vector<int>ans;

        int pair = 0;
        int left  = 0 ;




        for(auto  it:mp){
            if(it.second > 1){
                pair+=it.second/2;
                left += it.second%2;
            }else{
                left++;
            }
        }

        ans.push_back(pair);
        ans.push_back(left);
        
        
        return  ans;
        
    }
};