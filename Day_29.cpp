// :::: Question 1 ::::
// 557. Reverse Words in a String III

// problem statement:::
// https://leetcode.com/problems/reverse-words-in-a-string-iii/

// :::: Solution ::::

class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        for (int j = 0; j < s.size(); ++j) {
            if (s[j] == ' ') {
                reverse(s.begin() + i, s.begin() + j);
                i = j + 1;
            }
        }
        reverse(s.begin() + i, s.end());
        return s;
    }
};

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Modified Numbers and Queries

// problem statement:::
// https://practice.geeksforgeeks.org/.../modified-numbers.../1

// :::: Solution ::::
