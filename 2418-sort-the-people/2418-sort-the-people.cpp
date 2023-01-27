class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& h) {
        
    priority_queue<pair<int,string>>pq;

    int n = h.size();

    for(int i=0;i<n;i++){

        pq.push({h[i],names[i]});
    }

    names.clear();

    while(!pq.empty()){
        names.push_back(pq.top().second);

        pq.pop();
    }
        
        return names;
    }
};