#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n=nums.size();
        sort(nums.begin(),nums.end());

        vector<vector<int>>ans;
        set<vector<int>>st;

        for(int i=0;i<n;i++)
        {
                int s=i+1;
                int e=n-1;
                while(s<e)
                {
                    int sum=nums[i]+nums[s]+nums[e];
                    if(sum==0)
                    {
                        st.insert({nums[i],nums[s],nums[e]});
                        s++;
                        e--;
                    }

                    else if(sum<0)
                    {
                        s++;
                    }
                    else
                    {
                        e--;
                    }
                }  
        }
       

       for(auto it : st)
       {
           ans.push_back(it);
       }

       return ans;
 
    }
};