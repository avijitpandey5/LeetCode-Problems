class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int curr=0;
        int max_sum=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            curr+=nums[i];
            max_sum=max(max_sum,curr);
            if(curr<0)
            curr=0;
        }

        return max_sum;
        
    }
};