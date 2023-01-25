// :::: Question 1 ::::
// Merge Sorted Array

// problem statement:::
// https://leetcode.com/problems/merge-sorted-array/

// :::: Solution ::::

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            nums1[i] = nums2[j];
            i++;
            j++;
        }
        sort(nums1.begin(),nums1.end());
    }

//-----------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Maximum Matching of Players With Trainers

// problem statement:::
// https://leetcode.com/.../maximum-matching-of-players.../

// :::: Solution ::::

int matchPlayersAndTrainers(vector<int>& player, vector<int>& train) {
        sort(player.begin(), player.end());
        sort(train.begin(), train.end());
        int i = 0, j = 0;
        int n = player.size();
        int m = train.size();
        int ans = 0;
        while(i < m && j < n){
            if(train[i] >= player[j]){
                ans++;
                i++, j++;
            }
            else
                i++;
        }
        return ans;
    }
