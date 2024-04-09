#include<bits/stdc++.h>
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {

          queue<pair<int,int>>qe;

          for(int i=0;i<tickets.size();i++)
          {
            qe.push({tickets[i],i});
          }

          int count=0;
          while(!qe.empty())
          {
            pair<int,int>q=qe.front();
            if(q.second==k)
            {
                q.first--;
                count++;
                if(q.first==0)
                break;
                else
                {
                    int a=q.first;
                    int b=q.second;
                    qe.pop();
                    qe.push({a,b});
                   // count++;
                }
                
            }
            else
            {
                q.first--;
                count++;
                if(q.first==0)
                qe.pop();
                else
                {
                    int a=q.first;
                    int b=q.second;
                    qe.pop();
                    qe.push({a,b});
                   // count++;
                }
            }

          }

          return count;
        
    }
};
