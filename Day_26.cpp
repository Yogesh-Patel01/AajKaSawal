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

