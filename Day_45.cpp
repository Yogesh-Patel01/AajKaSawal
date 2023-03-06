// :::: Question 1 ::::
// 560. Subarray Sum Equals K

// problem statement:::
// https://leetcode.com/problems/subarray-sum-equals-k/

// :::: Solution ::::

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int ans = 0, sum = 0;
        m[0]++;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(m.count(sum-k))
                ans += m[sum-k];
            m[sum]++;
        }
        return ans;
    }
};

//------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 1013. Partition Array Into Three Parts With Equal Sum

// problem statement:::
// https://leetcode.com/.../partition-array-into-three.../

// :::: Solution ::::

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int totalSum = 0;
        for(auto x: arr)
            totalSum += x;
        if(totalSum % 3 != 0)
            return false;
        totalSum /= 3;
        int tempSum = 0, count = 0;
        for(auto x: arr){
            tempSum += x;
            if(tempSum == totalSum){
                count++;
                tempSum = 0;
            }
        }
        return (count >= 3);
    }
};
