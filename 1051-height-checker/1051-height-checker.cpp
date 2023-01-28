class Solution {
public:
    int heightChecker(vector<int>& vec) {
        
        vector<int> vec2  = vec;
        
        sort(vec2.begin(),vec2.end());


        int count  = 0;

        for(int i=0;i<vec.size();i++){
            if(vec[i] != vec2[i]){
                count++;
            }
        }
        
        
        return count;

    }
};