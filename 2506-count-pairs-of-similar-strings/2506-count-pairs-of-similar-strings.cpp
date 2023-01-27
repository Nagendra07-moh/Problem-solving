class Solution {
    bool find(string x, string tar){

	unordered_map<char,int>mp1,mp2;

	for(auto it:x){
		mp1[it]++;
	}

	for(auto it:tar){
		mp2[it]++;
	}

	if(mp1.size() != mp2.size()){
		return false;
	}

	for(auto it:mp1){
		if(mp2.count(it.first) == 0){
			return false;
		}
	}

	return true;

}
public:
    int similarPairs(vector<string>& vec) {
        int n = vec.size();

        int ans = 0;

        for(int i=0;i<n;i++){
            string x = vec[i];

            for(int j = i+1;j<n;j++){
                string tar = vec[j];

                ans+=find(x,tar);

            }
        }
        
        return ans;
        
    }
};