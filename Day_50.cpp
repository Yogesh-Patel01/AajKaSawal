// :::: Question 1 ::::
// Josephus problem

// problem statement:::
// https://practice.geeksforgeeks.org/pro.../josephus-problem/1

// :::: Solution ::::

int josephus(int n, int k){
  if(n == 1)
    return 1;
  return (josephus(n-1, k) + k - 1) % n + 1;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 1539. Kth Missing Positive Number

// problem statement:::
// https://leetcode.com/problems/kth-missing-positive-number/

// :::: Solution ::::

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start = 0, end = arr.size() - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            int missing = arr[mid] - (mid + 1);
            if(missing < k)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return (start + k);
    }
};
