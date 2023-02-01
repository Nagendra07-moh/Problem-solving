class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& vec) {
       set<int>st;

        for(auto it:vec){
            st.insert(it);
        }

        priority_queue<pair<int,int>>pq;


        int i =1;
        for(auto it:st){
            pq.push({it,i});
            i++;
        }

        unordered_map<int,int>mp;

        while(!pq.empty()){
            mp[pq.top().first] = pq.top().second; 
            pq.pop();

        }

        vector<int>ans;

        for(auto it:vec){

            ans.push_back(mp[it]);

        }
        
        return ans;
        
    }
};