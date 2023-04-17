class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();

        string ans = "";


        string temp = "";
        for(int i =0;i<n;i++){
            if(s[i] != ' '){
                temp.push_back(s[i]);
            }else{
                if(temp.size() > 0){
                    ans = temp;
                }
                // cout<<temp.size()<<endl;
                temp = "";
            }
        }

        if(temp.size() > 0){
            ans = temp;
        }
        
        return ans.size();
        
    }
};