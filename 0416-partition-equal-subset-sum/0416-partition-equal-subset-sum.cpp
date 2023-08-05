class Solution {
    vector<vector<int>>mem;
    bool find(vector<int>&vec,int n,int pos,int sum){
        if(sum == 0){
            return true;
        }else if(pos>=n || sum<0){
            return false;
        }
        
        if(mem[pos][sum] != -1){
            return mem[pos][sum];
        }
        
        return mem[pos][sum] = find(vec,n,pos+1,sum-vec[pos]) || find(vec,n,pos+1,sum);
    }
    
public:
    bool canPartition(vector<int>& vec) {
        int sum = 0;
        int n = vec.size();
        for(auto it:vec){
            sum += it;
        }
        
        if(sum & 1){
            return false;
        }
        
        mem.clear();
        mem.resize(n+1,vector<int>(sum/2+1,-1));
        
        return find(vec,n,0,sum/2);
        
    }
};