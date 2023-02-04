// :::: Question 1 ::::
// 1893. Check if All the Integers in a Range Are Covered

// problem statement:::
// https://leetcode.com/.../check-if-all-the-integers-in-a.../

// :::: Solution ::::

class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int count = 0;
        for(int i=left;i<=right;i++){
            for(auto x: ranges){
                if(x[0] <= i && i <= x[1]){
                    count++; 
                    break;
                }
            }
        }
        return (right - left + 1 == count);
    }
};

//---------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 2428. Maximum Sum of an Hourglass

// problem statement:::
// https://leetcode.com/problems/maximum-sum-of-an-hourglass/

// :::: Solution ::::

class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int maxSum = 0;
        int sum = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n-2;i++){
            for(int j=0;j<m-2;j++){
                sum = grid[i+1][j+1];
                for(int k=j;k<j+3;k++)
                    sum += grid[i][k];
                for(int k=j;k<j+3;k++)
                    sum += grid[i+2][k];
                if(maxSum < sum)
                    maxSum = sum;
            }
        }
        return maxSum;
    }
};
