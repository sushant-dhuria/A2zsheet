class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>>res;
      sort(nums.begin(),nums.end());

      int low=0,high=nums.size()-1;
     for(int i=0;i<nums.size()-2;i++)
     {
          if(i==0 || (i>0 && nums[i]!=nums[i-1]))
                {
                    int low=i+1,high=nums.size()-1,sum=0-nums[i];
                     while(low<high)
                     {
                         if(nums[low]+nums[high]==sum)
                         {
                             res.push_back({nums[low],nums[high],-1*sum});
                                while(low<high && nums[low]==nums[low+1])
                                   { 
                                      low++;
                                    }
                                while(low<high &&  nums[high]==nums[high-1])
                                     {
                                        high--;
                                    }
                                   low++;
                                   high--;
                         }
                         else if(nums[low]+nums[high]>sum)
                         {
                             high--;
                         }
                         else{
                             low++;
                         }
                     }
                }
     }
  return res;
    }
};