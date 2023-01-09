// :::: Question 1 ::::
// Searching an element in a sorted array

// problem statement:::
// https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=who-will-win&fbclid=IwAR0Q2W_TZeVDz4vzS-Geh5lMzL8vW70FerA6o1_swRVOlDpSdwRTx0F65mw

// :::: Solution ::::

int searchInSorted(int arr[], int n, int k) { 
        int s = 0, e = n - 1, mid = s + (e - s) / 2;
        while(s <= e){
            if(arr[mid] == k)
                return 1;
            if(k < arr[mid])
                e = mid - 1;
            else
                s = mid + 1;
            mid = s + (e - s) / 2;   
        }
        return -1;
    }
 
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
 
// :::: Question 2 ::::
// Missing number

// problem statement:::
// https://practice.geeksforgeeks.org/problems/missing-number4257/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=missing-number&fbclid=IwAR1lxCM5yrjVDt2ig-wmXRE0N9FaUuoh_2q85QDDYL3tHiN7Q52FZHfiitA

// :::: Solution ::::

int missingNumber(int a[], int n){
    int sum = 0;
    int dsum = n * (n + 1) / 2;
    for(int i=0;i<n-1;i++){
        sum += a[i];
    }
    return dsum - sum;
}
