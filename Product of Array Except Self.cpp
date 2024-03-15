class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int>ans;
        int a=1;
       ans.push_back(1);

        for(int i=1;i<nums.size();i++)
        {
            a=a*nums[i-1];
            ans.push_back(a);
        }

        int b=1;
        for(int i=nums.size()-1;i>0;i--)
        {
            b=b*nums[i];
            ans[i-1]*=b;
        }

        return ans;
        
    }
};
