// :::: Question 1 ::::
// 1748. Sum of Unique Elements

// problem statement:::
// https://leetcode.com/problems/sum-of-unique-elements/

// :::: Solution ::::

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> ct;
        for(auto x: nums)
            ct[x]++;
        int sum = 0;
        for(auto x: ct){
            if(x.second == 1)
                sum += x.first;
        }
        return sum;
    }
};

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 2269. Find the K-Beauty of a Number

// problem statement:::
// https://leetcode.com/problems/find-the-k-beauty-of-a-number/

// :::: Solution ::::

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string temp = to_string(num);
        int i = 0, j = 0;
        int ans = 0;
        while(i < temp.size()){
            if(i - j + 1 > k){
                j++;
            }
            if(i - j + 1 == k){
                int k = j;
                int sub = 0;
                while(k <= i){
                    sub = sub * 10 + (temp[k] - '0');
                    k++;
                }
                if(sub != 0 && num % sub == 0)
                    ans++;
                j++;
            }
            i++;
        }
        return ans;
    }
};
