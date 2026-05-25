class Solution {
public:
    vector<int> topStudents(vector<string>& p, vector<string>& n, vector<string>& r, vector<int>& sid, int k) {
        set<string>pos,neg;
         vector<int>res;
       priority_queue<pair<int,int>> pq;
        for(auto& i:p){
            pos.insert(i);
        }
        for(auto& i:n){
            neg.insert(i);
        }
        for(int i=0;i<r.size();i++){
            string temp;
            int ans=0;
            for(int j=0;j<r[i].size();j++){
                if(r[i][j]==' '){
                    if(pos.count(temp)){
                        ans+=3;
                    }
                    if(neg.count(temp)){
                        ans-=1;
                    }
                    temp.clear();
                }
                else{
                temp+=(r[i][j]);}
            }
             if(pos.count(temp)){
                        ans+=3;
                    }
                    if(neg.count(temp)){
                        ans-=1;
                    }
                    temp.clear();
            pq.push({ans,-1*sid[i]});

        }
        for(int i=0;i<k;i++){
            int an=pq.top().second;
            res.push_back(-1*an);
            pq.pop();
        }
        return res;
    }
};