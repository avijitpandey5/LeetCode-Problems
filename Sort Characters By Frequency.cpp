class Solution {
public:

  static bool cmp(pair<char,int>p1,pair<char,int>p2)
   {
       return p1.second>p2.second;
   }
     
    string frequencySort(string s) {
        
       map<char,int>mpp;

       for(int i=0;i<s.length();i++)
       {
           mpp[s[i]]++;
       }

       vector<pair<char,int>>v;

       for(auto it:mpp)
       {
           v.push_back({it.first,it.second});
       }

       sort(v.begin(),v.end(),cmp);

       string ans="";

       for(int i=0;i<v.size();i++)
       {
           int j=v[i].second;
           while(j--)
           {
              ans+=v[i].first;
           }
       }

       return ans;

    }
};