// :::: Question 1 ::::
// Largest subarray with 0 sum

// problem statement:::
// https://bit.ly/3w5QSzC

// :::: Solution ::::

int maxLen(vector<int>&a, int n){   
        unordered_map<int,int> um;
        int sum = 0,len = 0;
        for(int i=0;i<n;i++){
            sum += a[i];
            if(sum == 0)
                len = i + 1;
            else if(um.find(sum) != um.end())
                len = max(len, i- um[sum]);
            else
                um[sum] = i;
        }
        return len;
    }

//---------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Spiral travarsal of matrix

// problem statement:::
// https://leetcode.com/problems/spiral-matrix/description/?fbclid=IwAR0zxxqUCAYxu4b_uqzYb2v5Ab18BTfNrhkrtG73GNHM5bFk-DKwKdY60vM

// :::: Solution ::::

vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int right = mat[0].size(), left = 0, top = 0, down = mat.size();
        while(left < right && top < down){
            for(int i=left;i<right;i++)
                ans.push_back(mat[top][i]);
            top++;
            for(int i=top;i<down;i++)
                ans.push_back(mat[i][right-1]);
            right--;
            if(!(left < right && top < down))
                break;
            for(int i=right-1;i>left-1;i--)
                ans.push_back(mat[down-1][i]);
            down--;
            for(int i=down-1;i>top-1;i--)
                ans.push_back(mat[i][left]);
            left++;
        }
        return ans;
    }
