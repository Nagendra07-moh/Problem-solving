class Solution {
public:
    int strStr(string hstk, string ndle) {
        int n = hstk.size();
        int m = ndle.size();


        int ans = -1;

        for(int i=0;i<n;i++){
            string new_str = hstk.substr(i,m);

            if(new_str == ndle){
                ans = i;
                break;
            }
        }
        
        
        return ans;

    }
};