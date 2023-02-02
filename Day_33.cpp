// :::: Question 1 ::::
// 729. My Calendar I

// problem statement:::
// https://leetcode.com/problems/my-calendar-i/

// :::: Solution ::::

class MyCalendar {
public:
    map<int, int> cal;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto x: cal){
            if (max(x.first, start) < min(end, x.second)) 
                return false;
        }
        cal[start] = end;
        return true;
    }
};

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 81. Search in Rotated Sorted Array II

// problem statement:::
// https://leetcode.com/.../search-in-rotated-sorted-array-ii/

// :::: Solution ::::

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(nums[mid] == target)
                return true;
            if(nums[start] == nums[mid] && nums[end] == nums[mid]){
                start++, end--;
            }
            else if(nums[start] <= nums[mid]){
                if(nums[start] <= target && target < nums[mid])
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            else{
                if(nums[end] >= target && target > nums[mid])
                    start = mid + 1;
                else
                    end = mid - 1;
            }

        }
        return false;
    }
};
