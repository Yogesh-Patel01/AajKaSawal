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

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 342. Power of Four

// problem statement:::
// https://leetcode.com/problems/power-of-four/

// :::: Solution ::::

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0)
            return false;
        while(n){
            if(n % 4 == 0)
                n /= 4;
            else
                return (n == 1); 
        }
        return true;
    }
};
