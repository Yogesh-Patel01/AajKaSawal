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
