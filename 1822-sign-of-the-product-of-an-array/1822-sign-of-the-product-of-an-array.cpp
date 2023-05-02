class Solution {
public:
    int arraySign(vector<int>& vec) {
        
        int count = 0;


        for(auto it:vec){
            if(it == 0){
                return 0;
            }

            if(it < 0 ){
                count++;
            }
        }


        if(count%2 == 0){
            return 1;
        }

        return -1;

    }
};