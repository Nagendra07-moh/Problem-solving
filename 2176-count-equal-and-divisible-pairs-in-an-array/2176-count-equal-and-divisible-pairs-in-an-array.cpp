class Solution {
public:
    int countPairs(vector<int>& vec, int k) {

        int n = vec.size();

        int count = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                if(vec[i] == vec[j] && i < j){
                    if((i*j) % k == 0){
                        count++;
                    }
                }
            }
        }
    
        return count;
        
    }
};