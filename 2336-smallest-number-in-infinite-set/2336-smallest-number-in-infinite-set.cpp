class SmallestInfiniteSet {
private :
    set<int> st;
public:
    SmallestInfiniteSet() 
    {
        for(int i=1;i<=1000;i++) st.insert(i);
        
    }
    
    int popSmallest() 
    {
        int num=*st.begin();
        st.erase(num);
        return num;
        
    }
    
    void addBack(int num) 
    {
        st.insert(num);    
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */