class Solution {
public:
    int maxCandies(vector<int>& s, vector<int>& c, vector<vector<int>>& k, vector<vector<int>>& cb, vector<int>& in) {
        vector<bool> box(s.size(),false);
        vector<bool>key(s.size(),false);
        vector<bool>o(s.size(),false);
        queue<int>q;
        for( int i : in){
             box[i]=true;
            if(s[i]==1){ o[i]=true;
            q.push(i);}
        }
        
        int cnt=0;
        while( !q.empty()){
            int present = q.front();
            q.pop();
            cnt+=c[present];
             for( int i : k[present]){
                key[i]=true;
                if( box[i]&& !o[i]){
                    q.push(i);
                    o[i]= true;
                }
            }
            for( int i : cb[present]){
                 box[i]=true;
                if( !o[i] && ( s[i]==1 || key[i])){
                    q.push(i);
                    o[i]=true;
                }
            }
           

        }

        
        return cnt;
    }
};