// :::: Question 1 ::::
// 2564. Substring XOR Queries

// problem statement:::
// https://leetcode.com/problems/substring-xor-queries/

// :::: Solution ::::

class Solution {
public:
    vector<vector<int>> substringXorQueries(string s, vector<vector<int>>& queries) {
        unordered_map<int, vector<int>> m;
        vector<vector<int>> res;
        for (int i = 0; i < s.size(); ++i) {
            long long val = 0;
            for (int j = 0; j < 32 && i + j < s.size(); ++j) {
                val = (val << 1) + (s[i + j] == '1');
                if (m.count(val) == 0)
                    m[val] = {i, i + j};
                if (s[i] == '0')
                    break;
            }
        }
        for (const auto &q : queries)
            if (auto it = m.find(q[0] ^ q[1]); it != end(m))
                res.push_back(it->second);
            else
                res.push_back({-1, -1});
        return res;
    }
};

//---------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 2475. Number of Unequal Triplets in Array

// problem statement:::
// https://leetcode.com/.../number-of-unequal-triplets-in.../

// :::: Solution ::::

class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        unordered_map<int, int> m;
        int ans = 0;
        for(auto x: nums)
            m[x]++;
        int left = 0, right = nums.size();
        for(auto x: m){
            right -= x.second;
            ans += left * right * x.second;
            left += x.second;
        }
        return ans;
    }
};
