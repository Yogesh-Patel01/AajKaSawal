// :::: Question 1 ::::
// 643. Maximum Average Subarray I

// problem statement:::
// https://leetcode.com/.../maximum-average.../description/

// :::: Solution ::::

double findMaxAverage(vector<int>& num, int k) {
        int sum = 0;
        double avg = INT_MIN;
        int i = 0, j = 0;
        while(i < num.size()){
            sum += num[i];
            if(i - j + 1 > k){
                sum -= num[j];
                j++;
            }
            if(i - j + 1 == k){
                avg = avg < (sum / (double)k) ? (sum / (double)k) : avg;
            }
            i++;
        }
        return avg;
    }
};

//---------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 345. Reverse Vowels of a String

// problem statement:::
// https://leetcode.com/problems/reverse-vowels-of-a-string/

// :::: Solution ::::

class Solution {
    bool isvowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }
public:
    string reverseVowels(string s) {
        int n = s.size();
        int start = 0, end = n - 1;
        while(start < end){
            if( isvowel(tolower(s[start])) && isvowel(tolower(s[end])) ){
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++, end--;
            }
            if(!isvowel(tolower(s[start])))
                start++;
            if(!isvowel(tolower(s[end])))
                end--;
        }
        return s;
    }
};
