class Solution {
    bool solve(string str)
    {
        int s=0;
        int e=str.length()-1;

        while(s<e)
        {
            if(str[s]!=str[e])
            return false;

            s++;
            e--;
        }

        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {

        string st="";

        for(int i=0;i<words.size();i++)
        {
            bool check=solve(words[i]);
            if(check)
            return words[i];
        }

        return st;
        
    }
};