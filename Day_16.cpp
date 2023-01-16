// :::: Question 1 ::::
// Find Smallest Letter Greater Than Target

// problem statement:::
// https://leetcode.com/.../find-smallest-letter-greater.../

// :::: Solution ::::

char nextGreatestLetter(vector<char>& letters, char target) {
        if (letters.back() <= target) 
            return letters.front();
        int low = 0;
        int high = letters.size() - 1;
        while (low < high) {
            int mid = (low + high) / 2;
            if (target < letters[mid]) 
                high = mid;
            else 
                low = mid + 1;
        }
        return letters[low];
    }

//----------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Guess Number Higher or Lower

// problem statement:::
// https://leetcode.com/problems/guess-number-higher-or-lower/

// :::: Solution ::::

int guessNumber(int n) {
        int left = 1;
        int right = n;
        int mid = left + (right - left) / 2;
        while(left <= right){
            if(guess(mid) == 0)
                return mid;
            if(guess(mid) == -1)
                right = mid - 1;
            if(guess(mid) == 1)
                left = mid + 1;
            mid = left + (right - left) / 2;
        }
        return 0;
    }
