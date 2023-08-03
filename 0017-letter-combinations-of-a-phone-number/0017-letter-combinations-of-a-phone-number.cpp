void combine(int ind,string temp,vector<string>&ans,string str,vector<string>&map){
	if(ind == str.length()){
		ans.push_back(temp);
		return;
	}
	int x = str[ind]-'0';
	string s =  map[x];
	for(int i=0;i<s.length();i++){
		temp.push_back(s[i]);
		combine(ind+1,temp,ans,str,map);
		temp.pop_back();
	}
}



class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size() == 0) return ans;
        string temp = "";
        vector<string> map = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        combine(0,temp,ans,digits,map);
        return ans;
    }
};