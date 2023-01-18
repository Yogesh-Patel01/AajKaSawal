// :::: Question 1 ::::
// reate Target Array in the Given Order

// problem statement:::
// https://leetcode.com/.../create-target-array-in-the.../

// :::: Solution ::::

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
            ans.insert(ans.begin() + index[i], nums[i]);
        return ans;
    }

//----------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Lemonade Change

// problem statement:::
// https://leetcode.com/problems/lemonade-change/description/

// :::: Solution ::::

bool lemonadeChange(vector<int>& bills) {
        if(bills[0] != 5)
            return false;
        int five = 0;
        int ten = 0;
        for(auto x: bills){
            if(x == 5)
                five++;
            else if(x == 10){
                if(five < 1)
                    return false;
                ten++;
                five--;
            }
            else{
                if(ten > 0 && five > 0){
                    ten--;
                    five--;
                }
                else if(five > 2)
                    five -= 3;
                else
                    return false;
            }   
        }
        return true;
    }
