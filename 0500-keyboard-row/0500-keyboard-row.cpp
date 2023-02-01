class Solution {
    bool find(string s,unordered_map<char,int>mp){

	for(auto it:s){
		if(mp.count(it) == 0){
			return false;
		}
	}


	return true;
}

public:
    vector<string> findWords(vector<string>& vec) {
        unordered_map<char,int>mp1,mp2,mp3;

            mp1['Q']++;
            mp1['q']++;
            mp1['W']++;
            mp1['w']++;
            mp1['E']++;
            mp1['e']++;
            mp1['R']++;
            mp1['r']++;
            mp1['T']++;
            mp1['t']++;
            mp1['Y']++;
            mp1['y']++;
            mp1['U']++;
            mp1['u']++;
            mp1['I']++;
            mp1['i']++;
            mp1['O']++;
            mp1['o']++;
            mp1['p']++;
            mp1['P']++;


            //MAP 2 FILLING //

            mp2['A']++;
            mp2['a']++;
            mp2['S']++;
            mp2['s']++;
            mp2['D']++;
            mp2['d']++;
            mp2['F']++;
            mp2['f']++;
            mp2['G']++;
            mp2['g']++;
            mp2['H']++;
            mp2['h']++;
            mp2['J']++;
            mp2['j']++;
            mp2['K']++;
            mp2['k']++;
            mp2['L']++;
            mp2['l']++;


            //MAP 3 filling //

            mp3['Z']++;
            mp3['z']++;
            mp3['X']++;
            mp3['x']++;
            mp3['C']++;
            mp3['c']++;
            mp3['V']++;
            mp3['v']++;
            mp3['B']++;
            mp3['b']++;
            mp3['N']++;
            mp3['n']++;
            mp3['M']++;
            mp3['m']++;

            vector<string>ans;


            for(auto it:vec){
                if(find(it,mp1) || find(it,mp2) || find(it,mp3)){
                    ans.push_back(it);
                }
            }
            return ans;
        
    }
};