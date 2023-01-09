// :::: Question 1 ::::
// Replace all 0's with 5

// problem statement:::
// https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1?fbclid=IwAR2PNJdwQMiUI0Puf65kVxp-zsCYop1TIkGKXPgMCJNtf5Cadtv8ZhTDCyU

// :::: Solution ::::

int convertFive(int n) {
    string ans = to_string(n);
    for(int i=0;i<ans.size();i++){
        if(ans[i] == '0')
            ans[i] = '5';
    }
    return stoi(ans);
}
