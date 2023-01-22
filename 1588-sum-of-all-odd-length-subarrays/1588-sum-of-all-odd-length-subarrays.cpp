class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& vec) {
        int n = vec.size();

        int ans = 0;


        for(int i=0;i<n;i++){
            int cnt = 0;

            for(int j=i;j<n;j++){
                cnt += vec[j];

                if((!((j-i)&1))){
                    ans+=cnt;
                }
            }
        }
        
        return ans;

    }
};