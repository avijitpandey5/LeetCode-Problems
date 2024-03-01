class Solution {
public:
    string maximumOddBinaryNumber(string s) {

        int n=s.length();

        int count1=0;
        int count0=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            count1++;
            else
            count0++;
        }

        string st="";

         while(count1>1)
         {
            st+='1';
            count1--;
         }

         while(count0!=0)
         {
             st+='0';
             count0--;
         }

         st+='1';

         return st;
        
    }
};