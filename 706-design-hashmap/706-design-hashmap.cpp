class MyHashMap {
private :
    vector<list<pair<int,int>>> mp;
    int size;
public:
    MyHashMap() 
    {
        size=100;
        mp.resize(size);
    }
    
    int hash(int key)
    {
        return key%size;
    }
    
    list<pair<int,int>> :: iterator search(int key)
    {
        int i=hash(key);
        list<pair<int,int>>::iterator it=mp[i].begin();
        while(it!=mp[i].end())
        {
            if(it->first==key) return it;
            it++;
        }
        return it;
    }
    void put(int key, int value) 
    {
        int i=hash(key);
        remove(key);
        mp[i].push_back({key,value});
    }
    
    int get(int key) 
    {
        int i=hash(key);
        list<pair<int,int>>::iterator it=search(key);
        if(it!=mp[i].end()) return it->second;
        else return -1;
    }
    
    void remove(int key)
    {
        int i=hash(key);
        list<pair<int,int>>::iterator it=search(key);
        if(it!=mp[i].end()) mp[i].erase(it);
    }
};


/*
private :
    int arr[10000001];
public:
    MyHashMap() 
    {
        fill(arr,arr+10000000,-1);    
    }
    
    void put(int key, int value) 
    {
        arr[key]=value;
    }
    
    int get(int key) 
    {
        return arr[key];    
    }
    
    void remove(int key)
    {
        arr[key]=-1;    
    }


*/