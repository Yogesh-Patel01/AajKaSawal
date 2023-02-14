// :::: Question 1 ::::
// 395. Longest Substring with At Least K Repeating Characters

// problem statement:::
// https://leetcode.com/.../longest-substring-with-at-least.../

// :::: Solution ::::

class Solution {
public:
    int longestSubstring(string s, int k) {
        unordered_map<char, int> countMap;
        for(auto x: s)
            countMap[x]++;
        int max = countMap.size();
        int ans = 0;
        for(int allow=1;allow<=max;allow++){
            int count[26] = {0};
            int start = 0, end = 0, curr = 0, kcount = 0;
            while(end < s.size()){
                if(curr <= allow){
                    int index = s[end] - 'a';
                    if(!count[index])
                        curr++;
                    count[index]++;
                    if(count[index] == k)
                        kcount++;
                    end++;
                }
                else{
                    int index = s[start] - 'a';
                    if(count[index] == k)
                        kcount--;
                    count[index]--;
                    if(!count[index])
                        curr--;
                    start++;
                }
                if(curr == allow && curr == kcount)
                    ans = (ans > (end - start) ) ? ans : (end - start);
            }
        }
        return ans;
    }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 438. Find All Anagrams in a String

// problem statement:::
// https://leetcode.com/problems/find-all-anagrams-in-a-string/

// :::: Solution ::::

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> str(26), strp(26);
        for(auto& x: p)
            strp[x - 'a']++;
        int j = 0, i = 0;
        while(i < s.size()){
            str[s[i] - 'a']++;
            if( (i - j + 1 == p.size()) && (str == strp) ){
                ans.push_back(j);
            }
            if(i - j + 1 >= p.size()){
                str[s[j] - 'a']--;
                j++;
            }
            i++;
        }
        return ans;
    }
};
