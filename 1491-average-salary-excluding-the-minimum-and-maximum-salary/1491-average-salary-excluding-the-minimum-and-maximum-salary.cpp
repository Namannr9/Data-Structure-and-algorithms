class Solution {
public:
    double average(vector<int>& salary) 
    {
        double min=DBL_MAX;
        double max=DBL_MIN;
        double total=0;
        for(double sal : salary)
        {
            if(min>sal) min=sal;
            if(max<sal) max=sal;
            total+=sal;
        }
        total-=min;
        total-=max;
        return total/(salary.size()-2);
    }
};