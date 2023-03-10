// :::: Question 1 ::::
// 401. Binary Watch

// problem statement:::
// https://leetcode.com/problems/binary-watch/

// :::: Solution ::::

class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        for(int i=0;i<12;i++){
            for(int j=0;j<60;j++){
                bitset<4> hour(i);
                bitset<6> minute(j);
                if(hour.count() + minute.count() == turnedOn){
                    string temp;
                    temp = to_string(i) + ((j<10) ? ":0" : ":") + to_string(j);
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 1850. Minimum Adjacent Swaps to Reach the Kth Smallest Number

// problem statement:::
// https://leetcode.com/.../minimum-adjacent-swaps-to-reach.../

// :::: Solution ::::

class Solution {
public:
    int getMinSwaps(string num, int k) {
        string temp = num;
        int count = 0;
        while(k--)
            next_permutation(temp.begin(), temp.end());
        for(int i=0;i<num.size();i++){
            if(num[i] != temp[i]){
                int j = i + 1;
                while(num[j] != temp[i])
                    j++;
                while(j > i){
                    swap(num[j], num[j-1]);
                    count++, j--;
                }
            }
        }
        return count;
    }
};
