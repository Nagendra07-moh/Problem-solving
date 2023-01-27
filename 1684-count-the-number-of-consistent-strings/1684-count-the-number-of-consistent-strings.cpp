class Solution {
    bool find(unordered_map<char,int>mp,string s){

	for(auto it:s){
		if(mp.count(it) == 0){
			return false;
		}
	}

	return  true;
}
public:
    int countConsistentStrings(string s, vector<string>& vec) {
        int n = vec.size();


        unordered_map<char,int>mp;

        for(auto it:s){
            mp[it]++;
        }

        int ans = 0;

        for(int i=0;i<n;i++){

            string x = vec[i];

            ans += find(mp,x);

        }
        
        return ans;
    }
};