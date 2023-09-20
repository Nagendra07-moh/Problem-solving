class Solution {
public:
    int minFlips(string vec) {
        int n= vec.size();

        int count = 0;

        int i=0;

        int fleg = 0;

        while(i<n && vec[i] == '0'){
            i++;
        }
        i+=1;

        for(;i<n;i++){
            if(vec[i] != vec[i-1]){
                count++;
            }

            if(vec[i] == '1'){
                fleg = 1;
            }
        }


        if(count ==0 && !fleg){
           return 0;
        }else if(count == 0 && fleg){
            return 1;
        }
        
        return count+1;

        
    }
};