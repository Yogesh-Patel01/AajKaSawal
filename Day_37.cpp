// :::: Question 1 ::::
// 219. Contains Duplicate II

// problem statement:::
// https://leetcode.com/problems/contains-duplicate-ii

// :::: Solution ::::

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> st;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(st.count(nums[i])){
                if(abs(st[nums[i]] - i) <= k)
                    return true;
            }
            st[nums[i]] = i;
        }
        return false;
    }
};

//----------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 1922. Count Good Numbers

// problem statement:::
// https://leetcode.com/problems/count-good-numbers/description/

// :::: Solution ::::

class Solution {
    #define ll long long
public:
    int countGoodNumbers(long long n) {
        int mod = 1e9 + 7;
        ll int x = n / 2;
        ll int ans = 1;
        ll int val = 20;
        while(x > 0){
            if(x % 2){
                ans = ((ll)ans * ((ll)val % mod)) % mod;
            }
            val = (((ll)val) * ((ll)val)) % mod;
            x >>= 1;
        }
        if(n % 2 != 0){
            ans =(ans * (5)) % mod;
        }
        return ans;
    }
};

