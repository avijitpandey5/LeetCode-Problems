class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {

        sort(tokens.begin(),tokens.end());

        int n=tokens.size();
        int score=0;
        int left=0;
        int right=n-1;
        int maxScore=0;

        while(left<=right)
        {
            if(power>=tokens[left])
            {
                score++;
                power=power-tokens[left];
                left++;
                maxScore=max(maxScore,score);
            }

            else if(score>=1)
            {
                power=power+tokens[right];
                score--;
                right--;
            }

            else
            break;
        }

        return maxScore;
        
    }
};