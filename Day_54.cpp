// :::: Question 1 ::::
// 47. Permutations II

// problem statement:::
// https://leetcode.com/problems/permutations-ii/

// :::: Solution ::::

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        ans.push_back(nums);
        while(next_permutation(nums.begin(), nums.end()))
            ans.push_back(nums);
        return ans;
    }
};

//------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 2554. Maximum Number of Integers to Choose From a Range I

// problem statement:::
// https://leetcode.com/.../maximum-number-of-integers-to.../

// :::: Solution ::::

class Solution {
public:
    int maxCount(vector<int>& ban, int n, int maxSum) {
        int sum = 0;
        int count = 0;
        unordered_map<int, int> ct;
        for(auto x: ban)
            ct[x]++;
        for(int i=1;i<=n;i++){
            if(ct.find(i) == ct.end()){
                sum += i;
                if(sum <= maxSum)
                    count++;
                else
                    break;
            }
        }
        return count;
    }
};
