// :::: Question 1 ::::
// Sqrt(x)

// problem statement:::
// https://leetcode.com/problems/sqrtx/

// :::: Solution ::::

int mySqrt(int x) {
        int ans = sqrt(x);
        return ans;
    }

//------------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
//  First Bad Version

// problem statement:::
// https://leetcode.com/problems/first-bad-version/

// :::: Solution ::::

int firstBadVersion(int n) {
       int l = 1, r = n;
        while( l<=r ) {
            int mid = l + (r - l) / 2;
            if( isBadVersion(mid) ) {
                if( isBadVersion(mid) != isBadVersion(mid-1) ) 
                    return mid;
                else 
                    r = mid - 1;
            }
            else 
                l = mid + 1;
        }
        return -1; 
    }
