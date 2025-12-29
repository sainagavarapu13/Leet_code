class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        vector<int> v(n);
        queue<int> q;
        vector<int> u;
        for(int i=0;i<n;i++){
            q.push(i);
        }
        while(!q.empty()){
            u.push_back(q.front());
            // cout<<q.front();
            q.pop();
            if(q.empty()){
                break;
            }
            int a = q.front();
            // cout<<" "<<q.front()<<endl;
            q.pop();
            q.push(a);
        }
        int a = 0;
        sort(deck.begin(),deck.end());
        for(int i=0;i<n;i++){
            v[u[i]] = deck[a++];
        }
        return v;
    }
};