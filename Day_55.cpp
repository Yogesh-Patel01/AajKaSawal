// :::: Question 1 ::::
// 1109. Corporate Flight Bookings

// problem statement:::
// https://leetcode.com/problems/corporate-flight-bookings/

// :::: Solution ::::

class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> temp(n+1, 0);
        for(auto x: bookings){
            temp[x[0]-1] += x[2];
            temp[x[1]] -= x[2];
        }
        for(int i=1;i<=n;i++){
            temp[i] += temp[i-1];
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
            ans.push_back(temp[i]);
        return ans;
    }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 49. Group Anagrams

// problem statement:::
// https://leetcode.com/problems/group-anagrams/

// :::: Solution ::::

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> temp;
        for(auto x: strs){
            string tempString = x;
            sort(tempString.begin(), tempString.end());
            temp[tempString].push_back(x);
        }
        for(auto x: temp)
            ans.push_back(x.second);
        return ans;
    }
};
