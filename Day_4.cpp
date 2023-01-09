// :::: Question 1 ::::
// Pattern

// problem statement:::
// *    *    *    *    *    *    * 
//     *                     *
//         *             *
//             *     *
//                *

// :::: Solution ::::






// :::: Question 2 ::::
// Rotate Image

// problem statement:::
// https://leetcode.com/problems/rotate-image/submissions/871146256/

// :::: Solution ::::
 void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        reverse(matrix.begin(), matrix.end());
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				swap(matrix[i][j], matrix[j][i]);
			}
		}
}
