class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string>v;
        helper(ans, s, 0, v);
        return ans;
    }
    
    void helper(vector<vector<string>>&ans, string s,int index,vector<string>v){
        
        if(index==s.length()){
            ans.push_back(v);
            return;
        }
        
        for(int i=index;i<s.length();i++){
            
            if(isPalin(index,i,s)){
    
                v.push_back(s.substr(index,i-index+1));
                helper(ans, s,i+1,v);
                v.pop_back();
            }
        }
        return;
    
    }
    
    bool isPalin(int i, int j,string s){
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};