// :::: Question 1 ::::
// K-th element of two sorted Arrays

// problem statement:::
// https://practice.geeksforgeeks.org/.../k-th-element-of.../1

// :::: Solution ::::

int kthElement(int a[], int b[], int n, int m, int k){
        int l = min(a[0], b[0]);
        int h = max(a[n-1], b[m-1]);
        while(l <= h){
            int mid = l + ( h - l ) / 2;
            int x = upper_bound(a , a + n, mid) - a;
            int y = upper_bound(b, b + m, mid) - b;
            if(x + y < k)
                l = mid + 1;
            else 
                h = mid - 1;
        }
        return l;
    }

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Search insert position of K in a sorted array

// problem statement:::
// https://practice.geeksforgeeks.org/.../search-insert.../1

// :::: Solution ::::

int searchInsertK(vector<int> a, int n, int k){
        if(k < a[0])
            return 0;
        int start = 0, end = n - 1;
        int ans = 0;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(a[mid] == k)
                return mid;
            else if(a[mid] < k){
                ans = mid;
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
        return ans + 1;
    }
