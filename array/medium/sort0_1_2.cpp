class Solution {
public:
    void sortColors(vector<int>& nums) {
      int tmp = 0, low = 0, mid = 0, high = nums.size() - 1;
    // agar mid wala 0 hai to low wale se swap krenge and low++ , mid++
    // agar mid ==1 hai to bs mid++; shi jgaah hai vo
    // agar mid==2 swap with high and high-- nothing to do with mid 
        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                tmp = nums[low];
                nums[low] = nums[mid];
                nums[mid] = tmp;
                low++;
                mid++;
            }
            else if(nums[mid] == 1)
            {
                mid++;
            }
            else if(nums[mid] == 2)
            {
                tmp = nums[high];
                nums[high] = nums[mid];
                nums[mid] = tmp;
                high--;
            }
        }
    }
};