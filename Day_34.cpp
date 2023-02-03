// :::: Question 1 ::::
// 350. Intersection of Two Arrays II

// problem statement:::
// https://leetcode.com/problems/intersection-of-two-arrays-ii/

// :::: Solution ::::

class Solution {
public:
    vector<int> intersect(vector<int>& num1, vector<int>& num2) {
        vector<int> ans;
        int i = 0, j = 0;
        sort(num1.begin(), num1.end());
        sort(num2.begin(), num2.end());
        while(i < num1.size() && j < num2.size()){
            if(num1[i] == num2[j]){
                ans.push_back(num1[i]);
                i++, j++;
            }
            else if(num1[i] < num2[j])
                i++;
            else
                j++;
        }
        return ans;
    }
};



// :::: Question 2 ::::
// First negative integer in every window of size k

// problem statement:::
// https://practice.geeksforgeeks.org/.../first-negative.../1

// :::: Solution ::::
