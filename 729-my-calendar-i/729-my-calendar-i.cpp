class MyCalendar {
public:
    vector<pair<int, int>>pr;
    MyCalendar() {
        
    } 
    
    bool book(int start, int end) {
        for(auto [s, e] : pr){
            if(max(s, start) < min(e, end)){
                return false;
            }
        }
        pr.push_back({start, end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */