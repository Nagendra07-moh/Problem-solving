class Solution {
public:
    int maxDistance(vector<int>& vec) {
        int n = vec.size();

        int maxi = 1;

        for(int i =0;i<n;i++){
            int diff = 0;

            for(int j=0;j<n;j++){
                if(vec[i] != vec[j]){
                    diff = abs(j - i);

                    maxi = max(maxi,diff);
                }

            }
        }


        return maxi;

        
    }
};