// :::: Question 1 ::::
// Reverse words in a given string

// problem statement:::
// https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1?fbclid=IwAR08TK7S2v5AtyFCRWPahXStfvmoPzvMBXWRaGqmq12PW_byFu4Pkjf-D_U

// :::: Solution ::::

string reverseWords(string s){
        s += '.';
        int n = s.size();
        string temp;
        string ans = "";
        for(int i=0;i<n;i++){
            if(s[i] == '.'){
                reverse(temp.begin(), temp.end());
                ans = ans + temp;
                ans += '.';
                temp = "";
            }
            else{
                temp += s[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans.substr(1, n);
    } 
    
// ----------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Wave Array

// problem statement:::
// https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1?fbclid=IwAR0PfgHOFTHyzbEJPVvDj0pZ4I0TvhLCV02Eck8Mf4EQWe8aOcL0gUJ_IDA

// :::: Solution ::::

void convertToWave(int n, vector<int>& arr){
        for(int i=0;i<n-1;i+=2){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
