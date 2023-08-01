class Solution {
    void find(int ind,vector<vector<int>>&ans,vector<int>temp,int n,int k){
        if(temp.size() == k){
            ans.push_back(temp);
            return;
        }
        
        for(int i=ind;i<=n;i++){
            temp.push_back(i);
            
            find(i+1,ans,temp,n,k);
            
            temp.pop_back();
        }
    }
    
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<int>temp;
        
        
        vector<vector<int>>ans;
        
        find(1,ans,temp,n,k);
        
        return ans;
        
    }
};