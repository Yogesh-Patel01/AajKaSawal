// :::: Question 1 ::::
// Move all zeroes to end of array

// problem statement:::
// https://bit.ly/3PrGIjT

// :::: Solution ::::

void pushZerosToEnd(int arr[], int n) {
	    int start = 0;
	    int end = 0;
	    while(end < n){
	        if(arr[end] == 0)
	            end++;
	        else{
	            swap(arr[start], arr[end]);
	            start++; end++;
	        }
	    }
	}
  
// ----------------------------------------------------------------------------------------------------------------------------------------------------------
  
//   :::: Question 2 ::::
// Find the element that appears once

// problem statement:::
// https://bit.ly/3dudCD8

// :::: Solution ::::

int search(int a[], int n){
	    int ans = 0;
	    for(int i=0;i<n;i++){
	        ans ^= a[i];
	    }
	    return ans;
	}
