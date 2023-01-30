// :::: Question 1 ::::
// 1343. Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold

// problem statement:::
// https://leetcode.com/.../number-of-sub-arrays-of-size-k.../

// :::: Solution ::::

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        int ans = 0;
        int i = 0, j = 0;
        while(i < arr.size()){
            sum += arr[i];
            if(i - j + 1 > k)
                j++;
            if(i - j + 1 == k){
                if((sum / k) >= threshold)
                    ans++;
                sum -= arr[j];
            }
            i++;
        }
        return ans;
    }
};




