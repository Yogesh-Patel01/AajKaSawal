// :::: Question 1 ::::
// 643. Maximum Average Subarray I

// problem statement:::
// https://leetcode.com/.../substrings-of-size-three-with.../

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
// 643. Maximum Average Subarray I

// problem statement:::
// https://leetcode.com/.../substrings-of-size-three-with.../

// :::: Solution ::::
