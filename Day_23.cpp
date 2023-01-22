// :::: Question 1 ::::
// Largest subarray with 0 sum

// problem statement:::
// https://bit.ly/3w5QSzC

// :::: Solution ::::

int maxLen(vector<int>&a, int n){   
        unordered_map<int,int> um;
        int sum = 0,len = 0;
        for(int i=0;i<n;i++){
            sum += a[i];
            if(sum == 0)
                len = i + 1;
            else if(um.find(sum) != um.end())
                len = max(len, i- um[sum]);
            else
                um[sum] = i;
        }
        return len;
    }
