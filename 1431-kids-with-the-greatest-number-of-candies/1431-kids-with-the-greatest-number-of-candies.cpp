class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& vec, int ec) {
        int n = vec.size();

        int maxi  = 0;

        for(auto it:vec){
            maxi = max(maxi ,it);
        }


        vector<bool>ans;

        for(auto it:vec){
            int final = it+ec;

            if(final >= maxi ){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        
        return ans;

    }
};