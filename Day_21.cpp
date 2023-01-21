// :::: Question 1 ::::
// Valid Palindrome

// problem statement:::
// https://leetcode.com/problems/valid-palindrome/

// :::: Solution ::::

bool isPalindrome(string s) {
        int r = s.size() - 1;
         int l = 0;
        while (l < r) {
            while(l < r && !isalnum(s[l]))
                l++;
            while(l < r && !isalnum(s[r]))
                r--;
            if(tolower(s[l]) != tolower(s[r]))
                return false;
            l++;
            r--;
    }
    return true;
    }

//------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Counting Bits

// problem statement:::
// https://leetcode.com/problems/counting-bits/

// :::: Solution ::::

vector<int> countBits(int n) {
       vector<int> ans(n+1, 0);
       for(int i=0;i<=n;i++){
            bitset<64> x(i);
            ans[i] = x.count();
       } 
       return ans;
    }
