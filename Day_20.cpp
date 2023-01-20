// :::: Question 1 ::::
// Count Primes

// problem statement:::
// https://leetcode.com/problems/count-primes/

// :::: Solution ::::

int countPrimes(int n) {
        int ct = 0;
        vector<bool> prime(n + 1, true);
        for(int i=2;i*i <=n;i++){
            if(prime[i]){
                for(int j=i*i;j<=n;j+=i)
                    prime[j] = false;
            }
        }
        for(int i=2;i<n;i++){
            if(prime[i])
                ct++;
        }
        return ct;
    }

//------------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Gcd Queries

// problem statement:::
// https://www.codechef.com/problems/GCDQ 

// :::: Solution ::::

#include<bits/stdc++.h>
using namespace std;
long long const mx = 1e5 + 5;
int main()
{
	int t;
	cin>>t;
	while(t--){
    	long long int n,q;
    	cin>>n>>q;
    	long long int pre[n+1],suff[n+1];
    	long long int a[n+1];
        pre[0] = 0;
    	for(int i=1;i<=n;i++)
    		cin>>a[i];
        pre[1] = a[1];
        for(int i=2;i<=n;i++)
            pre[i] = __gcd(pre[i-1], a[i]);
        suff[n+1] = 0;
    	suff[n] = a[n];
    	
    	for(int i=n-1;i>=1;i--)
    		suff[i] = __gcd(suff[i+1],a[i]);
    	while(q--){
    		long long int l,r;
    		cin>>l>>r;
    		cout<<__gcd(pre[l-1], suff[r+1])<<endl;
    	}
	}
	return 0;
	
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 3 ::::
// Count Primes

// problem statement:::
// https://leetcode.com/problems/count-primes/

// :::: Solution ::::
