class Solution {
public:
    int singleNonDuplicate(vector<int>& vec) {
        int ans = 0;

        for(auto it:vec){
            ans = (ans ^ it);
        }

    return ans;
        
    }
};