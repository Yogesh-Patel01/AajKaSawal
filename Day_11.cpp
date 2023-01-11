// :::: Question 1 ::::
// Duplicate Zeros

// problem statement:::
// https://leetcode.com/problems/duplicate-zeros/

// :::: Solution ::::

void duplicateZeros(vector<int>& arr) {
        int z = 0;
        int n = arr.size();
        vector<int> temp;
        int j = 0;
        while(j < n){
            if(arr[j] == 0){
                temp.push_back(0);
                temp.push_back(0);
                j++;
            }
            else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i] = temp[i];
        }
    }

//----------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Intersection of Two Arrays

// problem statement:::
// https://leetcode.com/problems/intersection-of-two-arrays/

// :::: Solution ::::

vector<int> intersection(vector<int>& num1, vector<int>& num2) {
        vector<int> ans;
        int n = num1.size();
        int m = num2.size();
        if(n <= m){
            sort(num2.begin(), num2.end());
            set<int> st(num1.begin(), num1.end());
            for(auto x: st){
                if(binary_search(num2.begin(), num2.end(), x))
                    ans.push_back(x);
            }
        }
        else{
            sort(num1.begin(), num1.end());
            set<int> st(num2.begin(), num2.end());
            for(auto x: st){
                if(binary_search(num1.begin(), num1.end(), x))
                    ans.push_back(x);
            }
        }
        
        return ans;
    }
