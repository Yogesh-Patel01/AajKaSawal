// :::: Question 1 ::::
// 153. Find Minimum in Rotated Sorted Array

// problem statement:::
// https://leetcode.com/.../find-minimum-in-rotated-sorted.../

// :::: Solution ::::

class Solution {
public:
    int findMin(vector<int>& num) {
        int start = 0, end = num.size() - 1;
        while(start < end){
            if(num[start] < num[end])
                return num[start];
                
            int mid = start + (end - start) / 2;
            if(num[mid] >= num[0])
                start = mid + 1;
            else
                end = mid;
        }
        return num[start];
    }
};

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 172. Factorial Trailing Zeroes

// problem statement:::
// https://leetcode.com/problems/factorial-trailing-zeroes/

// :::: Solution ::::

class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        while(n >= 5){
            n /= 5;
            ans += n;
        }
        return ans;
    }
};
