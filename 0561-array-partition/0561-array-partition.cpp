class Solution {
public:
    int arrayPairSum(vector<int>& vec) {
        sort(vec.begin(),vec.end());


        int n = vec.size();

        int ans = 0;

        int i = 0;

        while(i<n){
            ans+=min(vec[i],vec[i+1]);
            i+=2;
        }
        
        return ans;
        
    }
};