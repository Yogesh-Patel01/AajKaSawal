// :::: Question 1 ::::
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

//----------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Count number of free cell

// problem statement:::
// https://practice.geeksforgeeks.org/.../90a81c305b1fe939.../1

// :::: Solution ::::

class Solution{
  public:
    vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
        vector<long long int> ans;
        vector<bool> row(n+1, false);
        vector<bool> col(n+1, false);
        int zeroCol = n, zeroRow = n;
        for(auto x: arr){
            if( !row[x[0]] ){
                row[x[0]] = true;
                zeroRow--;
            }
            if( !col[x[1]] ){
                col[x[1]] = true;
                zeroCol--;
            }
            ans.push_back(zeroCol * zeroRow);
        }
        return ans;
    }
};
