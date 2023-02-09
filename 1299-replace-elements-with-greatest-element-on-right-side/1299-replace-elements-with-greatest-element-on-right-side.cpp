class Solution {
public:
    vector<int> replaceElements(vector<int>& vec) {

        reverse(vec.begin(),vec.end());


        int maxi = -1;

        vector<int>ans;

        ans.push_back(maxi);

        for(int i=0;i<vec.size()-1;i++){

            maxi= max(maxi,vec[i]);
            ans.push_back(maxi);

        }


        reverse(ans.begin(),ans.end());
        
        
        return ans;

        
    }
};