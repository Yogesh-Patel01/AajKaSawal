// :::: Question 1 ::::
// 69. Sqrt(x)

// problem statement:::
// https://leetcode.com/problems/sqrtx/

// :::: Solution ::::

class Solution {
public:
    int mySqrt(int x) {
        int ans = 0;
        int start = 1, end = x;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(mid <= x / mid){
                ans = mid;
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
        return ans;
    }
};

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 2424. Longest Uploaded Prefix

// problem statement:::
// https://leetcode.com/problems/longest-uploaded-prefix/

// :::: Solution ::::

class LUPrefix {
public:
    vector<bool> uploaded;
    int count = 0;
    LUPrefix(int n) {
        uploaded.resize(n+2, false);
    }
    
    void upload(int video) {
        uploaded[video] = true;
    }
    
    int longest() {
        while(uploaded[count + 1])
            count++;
        return count;
    }
};
