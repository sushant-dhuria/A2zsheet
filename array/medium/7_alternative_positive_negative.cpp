class Solution{
public:

    void rearrange(int arr[], int n) {
        // code here
        int cnt1 = 0;
        int cnt2 = 1;
        vector <int> ans(n,0);
        for (int i = 0 ; i < n ; i++)
        {
           if (arr[i] >= 0)
           {
               ans[cnt1] = arr[i];   // for positive
               cnt1 += 2;
           }
           else
           {
               ans[cnt2] = arr[i];   // for negative
               cnt2 += 2;
           }
        }
        for (int i = 0 ; i < n ; i++)
        {
            arr[i] = ans[i];
        }
    }
};