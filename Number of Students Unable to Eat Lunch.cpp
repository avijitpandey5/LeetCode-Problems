class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

          stack<int>st;
          for(int i=sandwiches.size()-1;i>=0;i--)
          {
            st.push(sandwiches[i]);
          } 

          queue<int>q;

          for(int i=0;i<students.size();i++)
          {
            q.push(students[i]);
          }

          int count=0;

          while(!q.empty())
          {
             if(st.top()==q.front())
             {
                st.pop();
                q.pop();
                count=0;
             }
             else
             {
                int a=q.front();
                q.pop();
                q.push(a);
                count++;
                if(count==q.size())
                break;
             }
          }

          if(!q.empty())
          return q.size();
          else
          return 0;

      //    ---------- Approach 2 ------------

    //   int n=students.size();

    //   int arr[2]={0};

    //   for(int &stu:students)
    //   {
    //     arr[stu]++;
    //   }

    //   for(int i=0;i<sandwiches.size();i++)
    //   {
    //     int sand=sandwiches[i];
    //     if(arr[sand]==0)
    //     return n-i;

    //     else
    //     {
    //     arr[sand]--;
    //     }
    //   }

    //   return 0;
        
    }
};
