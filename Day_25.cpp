// :::: Question 1 ::::
// Merge Sorted Array

// problem statement:::
// https://leetcode.com/problems/merge-sorted-array/

// :::: Solution ::::

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            nums1[i] = nums2[j];
            i++;
            j++;
        }
        sort(nums1.begin(),nums1.end());
    }

//-----------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Maximum Matching of Players With Trainers

// problem statement:::
// https://leetcode.com/.../maximum-matching-of-players.../

// :::: Solution ::::


