class Solution {
    
int find(int ind,vector<int>&vec,int tar ,vector<vector<int>>&dp){
	if(ind == 0){
		if(tar%vec[0] == 0){
			return	1;

		}
		return 0;
	}
	if(dp[ind][tar] != -1){
		return dp[ind][tar];
	}

	int not_pick = find(ind-1,vec,tar,dp);

	int pick = 0;

	if(vec[ind] <= tar){
		pick = find(ind,vec,tar - vec[ind],dp);
	}

	return dp[ind][tar] = (pick + not_pick);
}


public:
    int change(int tar, vector<int>& vec) {
        int n = vec.size();
	vector<vector<int>>dp(n,vector<int>(tar+1,-1));
	return find(n-1,vec,tar,dp);
    }
};