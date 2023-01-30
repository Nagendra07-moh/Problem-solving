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
    int prefixCount(vector<string>& vec, string pref) {
        int n = vec.size();

        int count = 0;

        for(int i=0;i<n;i++){

            string x = vec[i];

            count+=find(x,pref);
        }
        
        return count;

        
    }
};