class Solution {
    bool find(string x,string pref){

    if(x.size() < pref.size()){
        return false;
    }

    int n = pref.size();

    for(int i=0;i<n;i++){
        if(x[i] != pref[i]){
            return false;
        }
    }

    return true;

}
public:
    int isPrefixOfWord(string str, string pref) {
        vector<string>vec;

        string temp = "";

        for(int i=0;i<str.size();i++){
            if(str[i] == ' ' || i == str.size()){
                vec.push_back(temp);
                temp = "";
            }else{
                temp+=str[i];
            }
        } 
        vec.push_back(temp);


        int n = vec.size();

        int ans = -1;

        for(int i=0;i<n;i++){

            string x = vec[i];

            if(find(x,pref)){
                ans = i+1;
                break; 
            }
        }
        
        return ans;
        
    }
};