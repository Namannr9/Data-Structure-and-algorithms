class MyCalendar {
    
private :
    vector<pair<int,int>> calendar;
public:
    
    MyCalendar() 
    {
        
    }
    
    bool book(int start, int end) 
    {
        for(pair<int,int> ele : this->calendar)
        {
            if(max(ele.first,start)<min(ele.second,end)) return false;
        }
        this->calendar.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */