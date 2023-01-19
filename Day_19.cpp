// :::: Question 1 ::::
// Check if All Characters Have Equal Number of Occurrences

// problem statement:::
// https://leetcode.com/.../check-if-all.../description/

// :::: Solution ::::

bool areOccurrencesEqual(string s) {
        map<char, int> ct;
        for(auto x: s)
            ct[x]++;
        int temp = ct[s[0]];
        for(auto x: ct){
            if(x.second != temp)
                return false;
        }
        return true;
    }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Increasing Decreasing String

// problem statement:::
// https://leetcode.com/.../increasing.../description/

// :::: Solution ::::

string sortString(string s) {
        string ans;
        vector<int> ct(26, 0);
        for(auto x: s)
            ct[x - 'a']++;
        while(s.size() > ans.size()){
            for(int i=0;i<26;i++){
                if(ct[i] != 0){
                    ans += 'a' + i;
                    ct[i]--;
                }
            }
            for(int i=25;i>=0;i--){
                if(ct[i] != 0){
                    ans += 'a' + i;
                    ct[i]--;
                }
            }
        }
        return ans;
    }
};
