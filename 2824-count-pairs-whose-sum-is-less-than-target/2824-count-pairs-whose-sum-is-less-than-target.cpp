class Solution {
public:
    int countPairs(vector<int>& vec, int tar) {
        int n = vec.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j =i+1;j<n;j++){
                if((vec[i]+vec[j]) < tar){
                    ans++;
                }
            }
        }
        return ans;
        
    }
};