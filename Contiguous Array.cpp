class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            nums[i]=-1;
        }


        unordered_map<int,int>mpp;
        mpp[0]=-1;

        int prefSum=0;
        int ans=0;

        for(int i=0;i<nums.size();i++)
        {
            prefSum+=nums[i];
            if(mpp.find(prefSum)!=mpp.end())
            {
                ans=max(ans,i-mpp[prefSum]);
            }
            else
            {
                mpp[prefSum]=i;
            }
        }

        return ans;
        
    }
};
