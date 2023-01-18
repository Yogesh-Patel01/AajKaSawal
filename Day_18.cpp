// :::: Question 1 ::::
// reate Target Array in the Given Order

// problem statement:::
// https://leetcode.com/.../create-target-array-in-the.../

// :::: Solution ::::

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
            ans.insert(ans.begin() + index[i], nums[i]);
        return ans;
    }



// :::: Question 1 ::::
// reate Target Array in the Given Order

// problem statement:::
// https://leetcode.com/.../create-target-array-in-the.../

// :::: Solution ::::
