class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
       
        int  n = s.size();
        
        // ON APPLING VARIABLE SIZE SLIDING WINDOW
        
        int maxi = k;
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<k;i++){
            mp[s[i]]++;
        }
        
        int i=0;
        for(int j=k;j<n;j++){
            mp[s[j]]++;
            
            while(min(mp['T'],mp['F']) > k){
                mp[s[i]]--;
                i++;
            }
            maxi = max(maxi,(j-i+1));
        }
        
        return maxi;
    }
};