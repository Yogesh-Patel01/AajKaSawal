// :::: Question 1 ::::
// Balloon Everywhere

// problem statement:::
// https://practice.geeksforgeeks.org/.../45fa306a9116332e.../1

// :::: Solution ::::

class Solution{
public:
    int maxInstance(string s){
        vector<int> count(26, 0);
        for(auto x: s)
            count[x - 'a']++;
        int ans = count[0];
        string d = "balloon";
        for(auto& x: d){
            if()
        }
        return ans;
        
    }
};

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

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
