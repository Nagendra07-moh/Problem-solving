class Solution {
public:
    int numSubseq(vector<int>& vec, int k) {
        int  ans =0;
        int n = vec.size();
        int i= 0;
        int mod = 1e9 + 7;
        int j = vec.size()-1;
        vector<int> power(n,1);
        
        sort(vec.begin(),vec.end());
        for(int i=1;i<n;i++){
            power[i] = (2 * power[i-1]) %mod;
        }
        
        while(i<=j){
            if((vec[j] + vec[i]) > k){
                j--;
            }else{
                ans=(ans+power[j-i])%mod;
                i++;
            }
        }
        return ans;
    }
};