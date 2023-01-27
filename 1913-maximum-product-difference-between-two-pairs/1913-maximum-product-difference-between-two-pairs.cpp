class Solution {
public:
    int maxProductDifference(vector<int>& vec   ) {
        
sort(vec.begin(),vec.end());

int n = vec.size();

int ans = (vec[n-1] * vec[n-2]) - (vec[1] * vec[0]);

        return ans;
        
    }
};