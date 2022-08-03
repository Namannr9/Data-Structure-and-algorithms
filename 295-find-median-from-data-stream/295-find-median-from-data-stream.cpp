class MedianFinder 
{
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>> minHeap;
public:

    MedianFinder() 
    {    
    }
    
    void addNum(int num) 
    {
        if(maxHeap.empty() || num<maxHeap.top()) maxHeap.push(num);
        else minHeap.push(num);
        
        // balance the heaps
        
        if(maxHeap.size() > minHeap.size()+1)
        {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        else if(maxHeap.size() < minHeap.size())
        {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    
    double findMedian() 
    {
        if(maxHeap.size()==minHeap.size())
        {
            return (double)(maxHeap.top()+minHeap.top())/2;
        }
        else
        {
            return maxHeap.top();
        }
    }
};
/*
Time limit exceed
class MedianFinder {
public:
initialize your data structure here. 
    MedianFinder() {
        
    }
    vector<int> ans;
    void addNum(int n) {
        if(ans.size()==0) ans.push_back(n);
        
        else{
          int l=0, r=ans.size()-1;
            int mid;
            while(l<=r){
                mid=l+(r-l)/2;
                if(ans[mid]<n)l=mid+1;
                else{
                    r=mid-1;
                }
            }
            ans.insert(ans.begin()+l,n);
            
        }
    }
    
    double findMedian() {
         int n=ans.size();
       
        if(n%2){
            return  ans[n/2];
        }
        
        else{
            return double((ans[n/2]+ans[(n/2)-1])/2.00000);
        }
    }
};


*/