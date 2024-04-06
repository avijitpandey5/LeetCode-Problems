class Solution {
public:
    string minRemoveToMakeValid(string s) {

       int left_parenthesis=0;
       int right_parenthesis=0;
       stack<char>st;

       for(int i=0;i<s.length();i++)
       {
        char ch=s[i];
        if(ch=='(')
          left_parenthesis++;
        else if(ch==')')
          right_parenthesis++;

        if(right_parenthesis>left_parenthesis)
          {
           right_parenthesis--;
           continue;
          }
        else
          {
            st.push(ch);
          }
       }

       string ans="";

       while(!st.empty())
       {
         if(left_parenthesis>right_parenthesis && st.top()=='(')
             left_parenthesis--;

          else
            ans+=st.top();

          st.pop();
       }

       reverse(ans.begin(),ans.end());
       return ans;
        
    }
};
