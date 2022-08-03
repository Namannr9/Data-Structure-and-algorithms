class BrowserHistory {
    vector<string> history;
    int cur;
    int last;
public:
    BrowserHistory(string homepage) 
    {
        cur=0;
        last=0;
        history.resize(5001);
        history[0]=homepage;
    }
    
    void visit(string url) 
    {
        
        history[++cur]=url;
        last=cur;
    }
    
    string back(int steps) 
    {
        cur=max(0,cur-steps);
        return history[cur];
    }
    
    string forward(int steps) 
    {
        cur=min(last,cur+steps);
        return history[cur];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */