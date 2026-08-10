class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>s;
        s.push(a[0]);
        for( int i=1;i<a.size();i++){
            int f=1;
            while( !s.empty() && s.top() >0 && a[i]<0){
                if( s.top() > abs(a[i])){ 
                    f=0;
                    break;}
                else if( s.top() == abs(a[i])){
                    f=0;
                    s.pop();
                    break;
                }else if( s.top() < abs(a[i])){
                    s.pop();
                }
            }
            if( f) s.push(a[i]);

        }
        vector<int>ans;
        while( !s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};