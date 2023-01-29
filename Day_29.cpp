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

class Solution {
  public:
    int sumOfAll(int l, int r){
        vector<bool> sieve(r+1, true);
        int sum = 0;
        sieve[0] = false;
        sieve[1] = false;
        for(int i=2;i<=r;i++){
            if(sieve[i] == true){
                if(i >= l)
                    sum += i;
                for(int j=2*i;j<=r;j=j+i){
                    sieve[j] = false;
                    if( j >= l)
                        sum += i;
                }
            }
        }
        return sum;
    }
};
