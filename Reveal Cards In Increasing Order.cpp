class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {

        sort(deck.begin(),deck.end());
        vector<int>ans;
        int n=deck.size();
        int arr[n];

        queue<int>q;
        for(int i=0;i<deck.size();i++)
        {
            q.push(i);
        }
        int i=0;
        while(!q.empty())
        {
            int top=q.front();
            q.pop();
            int next_top=q.front();
            q.pop();
            arr[top]=deck[i];
            i++;
            q.push(next_top);
        }

        for(int i=0;i<n;i++)
        {
            ans.push_back(arr[i]);
        }

        return ans;
        
    }
};
