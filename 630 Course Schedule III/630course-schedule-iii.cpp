class Solution {
public:
    int scheduleCourse(vector<vector<int>>& a) {
        priority_queue<int>pq;
        sort( a.begin(),a.end(), [](auto x , auto y){
            return x[1]<y[1];
        });
        int t =0;
       // int bef
        for( auto i : a){
            int d = i[0] , l = i[1];
            if( t+d <=l){
                t+=d;
                pq.push(d);
            }else{
                    if( !pq.empty() && pq.top()>d){
                        t-=pq.top();
                        pq.pop();
                        t+=d;
                        pq.push(d);
                    }
            }

        }
        return pq.size();

    }
};