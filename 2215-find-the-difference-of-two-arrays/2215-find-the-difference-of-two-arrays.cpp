class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& vec1, vector<int>& vec2) {
        vector<vector<int>>ans;


        unordered_map<int,int>mp;

        for(auto it:vec2){
            mp[it]++;
        }  

        vector<int>temp;
        for(auto it:vec1){
            if(mp.count(it)  == 0){
                temp.push_back(it);
                mp[it]++;
            }
        }

        ans.push_back(temp);
        temp.clear();
        mp.clear();

        for(auto it:vec1){
            mp[it]++;
        }

        for(auto it:vec2){
            if(mp.count(it) == 0){
                temp.push_back(it);
                mp[it]++;
            }
        }

        ans.push_back(temp);

        return ans;
    }
};