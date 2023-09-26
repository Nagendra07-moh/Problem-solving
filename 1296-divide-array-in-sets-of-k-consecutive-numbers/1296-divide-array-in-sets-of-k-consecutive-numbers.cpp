class Solution {
bool find(vector<int>&vec,int k){
	map<int,int>mp;

	for(auto it:vec){
		mp[it]++;
	}

	while(mp.size() > 0){
		int first = mp.begin()->first;

		for(int i = first;i<first+k;i++){
			if(!mp.count(i)){
				return false;
			}
			mp[i]--;
			if(mp[i]==0){
				mp.erase(i);
			}
		}
	}

	return true;

}

public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        return find(nums,k);
    }   
};