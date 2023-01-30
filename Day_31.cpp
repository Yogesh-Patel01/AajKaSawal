// :::: Question 1 ::::
// 303. Range Sum Query - Immutable

// problem statement:::
// https://leetcode.com/problems/range-sum-query-immutable/

// :::: Solution ::::

class NumArray {
public:
    vector<int> temp;
    vector<int> sum;
    NumArray(vector<int>& nums) {
       temp = nums;
       presum();
    }
    void presum(){
        int tsum = 0;
        for(int i=0;i<temp.size();i++){
            tsum += temp[i];
            sum.push_back(tsum);
        }
    }
    int sumRange(int left, int right) {
        return left-1>=0 ? sum[right] - sum[left-1] : sum[right];
    }
};
