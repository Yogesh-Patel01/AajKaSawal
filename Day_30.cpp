// :::: Question 1 ::::
// 1343. Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold

// problem statement:::
// https://leetcode.com/.../number-of-sub-arrays-of-size-k.../

// :::: Solution ::::

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        int ans = 0;
        int i = 0, j = 0;
        while(i < arr.size()){
            sum += arr[i];
            if(i - j + 1 > k)
                j++;
            if(i - j + 1 == k){
                if((sum / k) >= threshold)
                    ans++;
                sum -= arr[j];
            }
            i++;
        }
        return ans;
    }
};

//----------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 1175. Prime Arrangements

// problem statement:::
// https://leetcode.com/prob.../prime-arrangements/description/

// :::: Solution ::::

class Solution {
    int mod=1e9+7;
    long long fact(int n){
        if(n == 1 || n == 0)
            return 1;
        return n * fact(n-1) % mod;
    }
public:
    int numPrimeArrangements(int n) {
        vector<bool> sieve(n+1, true);
        sieve[0] = sieve[1] = false;
        int ct = 0;
        for(int i=2;i<=n;i++){
            if(sieve[i] == true){
                ct++;
                for(int j=2*i;j<=n;j+=i)
                    sieve[j] = false;
            }
        }
        long long int ans = fact(n-ct) % mod * fact(ct) % mod;
        return ans % mod;
    }
};
