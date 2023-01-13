// :::: Question 1 ::::
// Search Insert Position

// problem statement:::
// https://leetcode.com/problems/search-insert-position/

// :::: Solution ::::

int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, mid;
        while(start <= end){
            mid = start + (end - start)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(target > nums[mid])
                start = mid + 1;
            if(target < nums[mid])
                end = mid - 1;
        }
        return start;
    }
