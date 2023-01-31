// :::: Question 1 ::::
// 303. Range Sum Query - Immutable

// problem statement:::
// https://leetcode.com/problems/range-sum-query-immutable/

// :::: Solution ::::

class NumArray {
public:
    vector<int> temp;
    NumArray(vector<int>& nums) {
       temp = nums;
       presum();
    }
    void presum(){
        for(int i=1;i<temp.size();i++){
            temp[i] += temp[i-1];
        }
    }
    int sumRange(int left, int right) {
        return left-1>=0 ? temp[right] - temp[left-1] : temp[right];
    }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 162. Find Peak Element

// problem statement:::
// https://leetcode.com/problems/find-peak-element/

// :::: Solution ::::

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        while(start < end){
            int mid = start + (end - start) / 2;
            if(nums[mid] < nums[mid+1])
                start = mid + 1;
            else
                end = mid;
        }
        return end;
    }
};
