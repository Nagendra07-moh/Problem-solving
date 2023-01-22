class Solution {
public:
    string truncateSentence(string s, int k) {
        
    int i = 0;

    int n = s.size();

    for(int j=0;j<n;j++){

        if(s[j] == ' '){
            i++;
        }

        if(i == k){

            i =j;
            break;
        }
    }

    if(i < k){
        return s;
    }

    s.erase(s.begin()+i,s.end());

    return s;
        
    }
};