// :::: Question 1 ::::
// Maximum Number of Words Found in Sentences

// problem statement:::
// https://leetcode.com/.../maximum-number-of-words-found.../

// :::: Solution ::::

int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(auto x: sentences){
            int ct = 0;
            for(auto y: x){
                if(y == ' ')
                    ct++;
            }
            ans = ct > ans ? ct : ans;
        }
        return ans + 1;
    }

//------------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Find the Highest number

// problem statement:::
// https://practice.geeksforgeeks.org/.../find-the-highest.../1

// :::: Solution ::::

int findPeakElement(vector<int>& a){
        int s = 0;
        int e = a.size() - 1;
        while(s <= e){
            int mid = (s + ((e - s) / 2));
            if(a[mid] < a[mid-1])
                e = mid - 1;
            else if(a[mid] < a[mid+1])
                s = mid + 1;
            else
                return a[mid];
        }
    }
