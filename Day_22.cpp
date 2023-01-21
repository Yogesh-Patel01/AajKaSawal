// :::: Question 1 ::::
// Isomorphic Strings

// problem statement:::
// https://leetcode.com/problems/isomorphic-strings/

// :::: Solution ::::

bool isIsomorphic(string patt, string st) {
       map<char, char> temp;
        for(int i=0;i<st.size();i++){
            if(temp.find(patt[i]) != temp.end() && temp[patt[i]] != st[i]){
                return false;
            }
            temp[patt[i]] = st[i];
        }
        map<char, char> wtc;
        for(int i=0;i<st.size();i++){
            if(wtc.find(st[i]) != wtc.end() && wtc[st[i]] != patt[i]){
                return false;
            }
            else
                wtc[st[i]] = patt[i];
        }
        return true;
    }

//---------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Contains Duplicate

// problem statement:::
// https://leetcode.com/problems/contains-duplicate/

// :::: Solution ::::

bool containsDuplicate(vector<int>& nums) {
        map<int, int> st;
        for(auto x: nums){
            st[x]++;
            if(st[x] > 1)
                return true;    
        }
        return false;
    }
