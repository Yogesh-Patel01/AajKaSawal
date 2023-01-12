// :::: Question 1 ::::
// Maximum Ice Cream Bars

// problem statement:::
// https://leetcode.com/problems/maximum-ice-cream-bars/

// :::: Solution ::::

int maxIceCream(vector<int>& cost, int coin) {
        sort(cost.begin(), cost.end());
        int sum = 0;
        int i;
        for(i=0;i<cost.size();i++){
            sum += cost[i];
            if(sum > coin)
                break;
        }
        return i;
    }
