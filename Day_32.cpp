// :::: Question 1 ::::
// 287. Find the Duplicate Number

// problem statement:::
// https://leetcode.com/problems/find-the-duplicate-number

// :::: Solution ::::

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int start = 1, end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        while(start <= end){
            int count = 0;
            for(auto x: nums){
                if(x <= mid)
                    count++;
            }
            if(count <= mid)
                start = mid + 1;
            else
                end = mid - 1;
            mid = start + (end - start) / 2;
        }
        return start;
    }
};

//----------------------------------------------------------------------------------------------------------------------------------------------------------


// :::: Question 2 ::::
// 304. Range Sum Query 2D - Immutable

// problem statement:::
// https://leetcode.com/problems/range-sum-query-2d-immutable/

// :::: Solution ::::

--------------------------------NOT SOLVED-----------------------------------

