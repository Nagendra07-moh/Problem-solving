class Solution {
public:
    int lastStoneWeight(vector<int>& vec) {
        priority_queue<int> pq;


            for(auto it: vec){
                pq.push(it);
            }

            while(pq.size()>1){
                int x = pq.top();
                pq.pop();
                int y = pq.top();
                pq.pop();
                int ans = x-y;
                pq.push(ans);
            }
        return pq.top();

     }
};