// :::: Question 1 ::::
// Count Prefixes of a Given String

// problem statement:::
// https://leetcode.com/.../count-prefixes-of-a-given-string/

// :::: Solution ::::

int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        for(auto x: words){
            string str = s.substr(0, x.size());
            if(str == x) 
                count++;            
        }
        return count; 
    }

//----------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// First element to occur k times

// problem statement:::
// https://practice.geeksforgeeks.org/.../first-element-to.../1

// :::: Solution ::::

int firstElementKTime(int a[], int n, int k){
        map<int, int> ct;
        for(int i=0;i<n;i++){
            ct[a[i]]++;
            if(ct[a[i]] == k)
                return a[i];
        }
        return -1;
    }
