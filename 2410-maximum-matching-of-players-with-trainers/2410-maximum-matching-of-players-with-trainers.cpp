class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& play, vector<int>& train) {
        int  count = 0;

        int i=0;
        int j=0;

        sort(play.begin(),play.end());
        sort(train.begin(),train.end());
        while((i<play.size()) &&  (j<train.size())){
            if(play[i]<=train[j]){
                count++;
                i++;
                j++;
            }else{
                j++;
            }
        } 
        
        return count;
    }
};