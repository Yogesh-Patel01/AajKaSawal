// :::: Question 1 ::::
// 38. Count and Say

// problem statement:::
// https://leetcode.com/problems/count-and-say/

// :::: Solution ::::

class Solution {
    vector<pair<int, char>> countPair(string num){
        vector<pair<int, char>> ct;
        char temp = num[0];
        int count  = 1;
        for(int i=1;i<num.size();i++){
            if(num[i] == temp)
                count++;
            else{
                ct.push_back({count, temp});
                count = 1;
                temp = num[i];
            }
        }
        ct.push_back({count, temp});
        return ct;
    }
    string makeNum(vector<pair<int, char>> ct){
        string res = "";
        for(auto x: ct){
            res += (x.first + '0');
            res += x.second;
        }
        return res;
    }
public:
    string countAndSay(int n) {
        string ans  = "1";
        n--;
        while(n--){
            vector<pair<int, char>> count = countPair(ans);
            ans = makeNum(count);
        }
        return ans;
    }
};

//----------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 326. Power of Three

// problem statement:::
// https://leetcode.com/problems/power-of-three/description/

// :::: Solution ::::

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
            return false;
        while(n>1){
            if(n%3 != 0)
                return false;
            n=n/3;
        }
        return true;
    }
};
