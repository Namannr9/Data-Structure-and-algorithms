class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        int left=0;
        int right=letters.size()-1;
        char c=letters[0];
        while(left<=right)
        {
            int mid=(right+left)/2;
            if(letters[mid]<=target) left=mid+1;
            else
            {
                c=letters[mid];
                right=mid-1;
            }
        }
        return c;
    }
};


/*
possible solution with linear search
char nextGreatestLetter(vector<char>& letters, char target) 
    {
        for(char c : letters)
        {
            if(c>target) return c;
        }
        return letters[0];
    }
*/