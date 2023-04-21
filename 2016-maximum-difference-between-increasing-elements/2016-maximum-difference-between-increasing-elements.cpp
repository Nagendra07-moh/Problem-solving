class Solution {
public:
    int maximumDifference(vector<int>& vec) {
        int n = vec.size();

        reverse(vec.begin(),vec.end());


        int ans = -1;


        for(int i=0;i<n;i++){

            int diff = -1;

            for(int j=i;j<n;j++){
                diff = vec[i]  - vec[j];

                ans = max(ans,diff); 
            }
        }

        if(ans <= 0){
            ans = -1;
        }
        
        return ans;

        
    }
};