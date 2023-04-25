class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n = s.size();

        unordered_map<char,int>mp;

        for(auto it:s){
            mp[it]++;
        }

        unordered_set<int>st;

        for(auto it:mp){
            st.insert(it.second);
        }
        
        if(st.size() == 1){
            return true;
        }
        
        return false;


        
    }
};