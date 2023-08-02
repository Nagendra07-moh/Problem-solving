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
    bool canMakeArithmeticProgression(vector<int>& arr) {
        return find(arr);
    }
};