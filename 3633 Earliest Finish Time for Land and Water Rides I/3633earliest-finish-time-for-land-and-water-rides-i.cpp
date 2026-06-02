class Solution {
public:
    int earliestFinishTime(vector<int>& a1, vector<int>& a2, vector<int>& b1, vector<int>& b2) {
        int m =INT_MAX;
        for(int i=0;i<a1.size();i++){
            for(int j=0;j<b1.size();j++){
                int wait = (b1[j]-(a1[i]+a2[i]));
                if(wait<0) wait = 0;
               int time = a1[i]+a2[i]+wait+b2[j];
               int w =(a1[i]-(b1[j]+b2[j]));
               if(w<0) w=0;
                int t = b1[j]+b2[j]+w+a2[i];
                m=min(m,min(t,time));
            }
        }
        return m;
    }
};