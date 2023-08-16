class Solution {
public:
    int searchInsert(vector<int>& vec, int tar) {
        
        return lower_bound(vec.begin(),vec.end(),tar) - vec.begin();
        
    }
};