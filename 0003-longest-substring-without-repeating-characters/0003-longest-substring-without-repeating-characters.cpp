class Solution {
public:
    int lengthOfLongestSubstring(string str) {

    int n = str.size();
    int ans  =0;
    unordered_map<char,int>mp;


    // on implimenting varialbe size sliding window	

    int i = 0;
    int j =0;

    while(j<n){
        mp[str[j]]++;
        if(mp.size() == j-i+1){
            ans = max(ans,j-i+1);
            j++;
        }else if(mp.size() < j-i+1){
            while(mp.size() < j-i+1){
                mp[str[i]]--;
                if(mp[str[i]] == 0){
                    mp.erase(str[i]);
                }
                i++;
            }
            j++;
        }
    }

     return ans;  
    }
};