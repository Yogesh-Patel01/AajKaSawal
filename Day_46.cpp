// :::: Question 1 ::::
// 28. Find the Index of the First Occurrence in a String

// problem statement:::
// https://leetcode.com/.../find-the-index-of-the-first.../

// :::: Solution ::::

int count(string s, string c){
    for (int i=0;i<s.length();i++)
        if (s[i] == c[0]){
            int k = 1;
            for(int j=i+1;j<s.length();j++){
                if(s[j] == c[k])
                    k++;
                else
                    break;
            }
            if(k == c.length())
                return i;
        }
        return -1;
}

class Solution {
public:
    int strStr(string haystack, string needle) {
       return count(haystack,needle); 
    }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 1342. Number of Steps to Reduce a Number to Zero

// problem statement:::
// https://leetcode.com/.../number-of-steps-to-reduce-a.../

// :::: Solution ::::

class Solution {
public:
    int numberOfSteps(int num) {
        int ans = 0;
        while(num){
            if(num % 2 == 0)
                num /= 2;
            else
                num -= 1;
            ans++;
        }
        return ans;
    }
};
