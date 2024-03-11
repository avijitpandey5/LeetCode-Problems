class Solution {
public:
    string customSortString(string order, string s) {

        unordered_map<char,int>mpp;
        for(auto it:s)
        {
            mpp[it]++;
        }

        string ans="";

        for(int i=0;i<order.length();i++)
        {
            for(int j=0;j<s.length();j++)
            {
                if(order[i]==s[j])
                {
                   ans+=order[i];
                   mpp[s[j]]--;
                }
            }
        }

        for(int i=0;i<s.length();i++)
        {
            if(mpp[s[i]]!=0)
            ans+=s[i];
        }
        return ans;
        
    }
};
