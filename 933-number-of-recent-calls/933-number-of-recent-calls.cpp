class RecentCounter {
private :
    queue<int> q;
public:
    RecentCounter() 
    {
        
    }
    
    int ping(int t) 
    {
        q.push(t);
        int startTime=t-3000;
        while(q.size() && q.front() < startTime) q.pop();
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */