class MyHashSet {
    vector<list<int>> mp;
    int size;
public:
    MyHashSet() 
    {
        size=100;
        mp.resize(size);
    }
    
    int hash(int num)
    {
        return num%size;
    }
    
    
    void add(int key) 
    {
        if(contains(key)) return;
        int i=hash(key);
        mp[i].push_back(key);
    }
    
    list<int>:: iterator search(int key)
    {
        int i=hash(key);
        return find(mp[i].begin(),mp[i].end(),key);
    }
    void remove(int key) 
    {
        if(!contains(key)) return;
        int i=hash(key);
        mp[i].erase(search(key));
    }
    
    bool contains(int key) 
    {
        int i=hash(key);
        if(search(key)!=mp[i].end()) return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */