class Solution {
    int MOD = 100000007;
    int find(int x,int y,int m,int n, vector<vector<int>> vec,vector<vector<int>> &dp){
        if(x>= m || y >= n){
            return 0;
        }
        if(vec[x][y] == 1){
            return 0;
        }
        if(x == m-1 && y == n-1){
            return 1;
        }
        
        if(dp[x][y] != -1){
            return dp[x][y];
        }
        
        int right = find(x+1,y,m,n,vec,dp);
        
        int down = find(x,y+1,m,n,vec,dp);
        int ans = (right + down);
        
        dp[x][y] = ans;
        
        return ans;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>&vec) {
        
        int m = vec.size();
        int n = vec[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        
        return find(0,0,m,n,vec,dp);
        
    }
};