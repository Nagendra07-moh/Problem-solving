class Solution {
public:
    int maximumGroups(vector<int>& vec) {
        int n = vec.size();

int ans = 0;
int count = 0;

int target = 1;

int i=0;

while(i<=n){
	if(count == target){
		ans++;
		count = 0;
		target++;
	}
	i++;
	count++;
}
        
        return ans;
    }
};