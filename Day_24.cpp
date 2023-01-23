// :::: Question 1 ::::
// Max Sum Subarray of size K

// problem statement:::
// https://practice.geeksforgeeks.org/.../max-sum-subarray.../1

// :::: Solution ::::

long maximumSumSubarray(int k, vector<int> &arr , int n){
        long int ans = 0;
        for(int i=0;i<k;i++){
            ans += arr[i];
        }
        long int max = ans;
        int j = 0;
        for(int i=k;i<n;i++){
            ans -= arr[j];
            ans += arr[i];
            max = ans > max ? ans : max;
            j++;
        }
        return max;
    }

//--------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Max Sum Subarray of size K

// problem statement:::
// https://leetcode.com/problems/two-sum/

// :::: Solution ::::

vector<int> twoSum(vector<int>& num, int target) {
        map<int, int> ans;
        for(int i=0;i<num.size();i++){
            if(ans.find(num[i]) != ans.end()){
                return {ans[num[i]], i};
            }
            ans[target-num[i]] = i;
        }
        return {};
    }
