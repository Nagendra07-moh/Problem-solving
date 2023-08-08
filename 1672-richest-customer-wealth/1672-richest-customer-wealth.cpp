class Solution {
public:
    int maximumWealth(vector<vector<int>>& vec) {
        
        int n = vec.size();	


        int maxi = 0;

        for(int i=0;i<n;i++){
            int sum =0;
            sum = accumulate(vec[i].begin(),vec[i].end(),sum);
            maxi = max(maxi,sum);
        }

        return maxi;
            
    }
};