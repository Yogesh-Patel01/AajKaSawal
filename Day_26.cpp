// :::: Question 1 ::::
// 1876. Substrings of Size Three with Distinct Characters

// problem statement:::
// https://leetcode.com/.../substrings-of-size-three-with.../

// :::: Solution ::::

int countGoodSubstrings(string s) {
        int ct = 0;
        int i = 0, j = 1, k = 2;
        while(k < s.size()){
            if(s[i] != s[j] && s[i] != s[k] && s[j] != s[k])
                ct++;
            i++, j++, k++;
        }
        return ct;
    }

//---------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 2379. Minimum Recolors to Get K Consecutive Black Blocks

// problem statement:::
// https://leetcode.com/.../minimum-recolors-to-get-k.../

// :::: Solution ::::

int minimumRecolors(string block, int k) {
        int white = 0;
        for(int i=0;i<k;i++){
            if(block[i] == 'W')
                white++;
        }
        int ans = white;
        int i = 0;
        while(k < block.size()){
            if(block[i] == 'W')
                white--;
            if(block[k] == 'W')
                white++;
            i++, k++;
            ans = min(ans, white);
        }
        return ans;
    }
