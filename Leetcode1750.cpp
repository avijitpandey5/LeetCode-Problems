class Solution {
public:
    int minimumLength(string s) {

        int n=s.length();
        
        int start=0;
        int end=n-1;

        if(start==end)
        return 1;

        int check=0;
        while(start<end)
        {
            if(s[start]==s[end])
            {
                check=end-start;
                start++;
                end--;
            }
            if(s[start]!=s[end])
            {
                if( (end+1)<n && (s[start]==s[end+1]))
                   start++;
                else if((start-1)>=0 && (s[start-1]==s[end]))
                   end--;

                else
                {
                    return (end-start+1);
                }
            }
        }
        if(check==2 && s[start]!=s[start-1])
        return 1;

        return 0;

        
    }
};