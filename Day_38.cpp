// :::: Question 1 ::::
// 2550. Count Collisions of Monkeys on a Polygon

// problem statement:::
// https://leetcode.com/.../count-collisions-of.../description/

// :::: Solution ::::

class Solution {
public:
    int m = 1000000007;
    long long pow2(long long n){
        if(n == 1) 
            return 2;
        long long temp = pow2(n / 2);
        temp = (temp * temp) % m;
        return (n % 2) ? (2 * temp) % m : temp;
    }
    
    int monkeyMove(int n) {
        int temp = pow2(n) - 2;
        return (temp < 0) ? m + temp : temp;
    }
};

//---------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// 2535. Difference Between Element Sum and Digit Sum of an Array

// problem statement:::
// https://leetcode.com/.../difference-between.../description/

// :::: Solution ::::

class Solution {
public:
    int differenceOfSum(vector<int>& num) {
        int sum = 0, dSum = 0;
        for(auto x: num){
            sum += x;
            while(x){
                dSum += (x%10);
                x /= 10;
            }
        }
        return abs(sum - dSum);
    }
};
