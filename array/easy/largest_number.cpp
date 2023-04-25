class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int large=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(large<arr[i])
            large=arr[i];
        }
        
        return large;
    }
};
