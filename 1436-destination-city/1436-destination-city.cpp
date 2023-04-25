class Solution {
public:
    string destCity(vector<vector<string>>& vec) {
        
        int n = vec.size();

        unordered_set<string>st;
        unordered_map<string,int>mp;

        for(int i=0;i<n;i++){
            string str_1 = vec[i][0];
            string str_2 = vec[i][1];
            mp[str_1]++;

            st.insert(str_1);
            st.insert(str_2);

        }

        string ans = "";
        for(auto it:st){
            if(mp.find(it) == mp.end()){
                ans = it;
            }
        }
        
        return ans;

        
    }
};