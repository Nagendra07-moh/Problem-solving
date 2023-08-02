class Solution {
    bool find(vector<int>vec){
	int n = vec.size();
	set<int>mp;	

	sort(vec.begin(),vec.end());

	for(int i=0;i<vec.size()-1;i++){
		mp.insert(vec[i+1] - vec[i]);
	}
	if(mp.size()>1){
		return false;
	}
	return true;

}
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& vec, vector<int>& l, vector<int>& r) {
        
        vector<bool>ans;


        for(int i=0;i<l.size();i++){
        vector<int>temp;

            for(int j=l[i];j<=r[i];j++){
                temp.push_back(vec[j]);
            }
            if(find(temp) == true){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        
        return ans;
        
        
        
        
        
        
        
        
    }
};