// :::: Question 1 ::::
// 729. My Calendar I

// problem statement:::
// https://leetcode.com/problems/my-calendar-i/

// :::: Solution ::::

class MyCalendar {
public:
    map<int, int> cal;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto x: cal){
            if (max(x.first, start) < min(end, x.second)) 
                return false;
        }
        cal[start] = end;
        return true;
    }
};
