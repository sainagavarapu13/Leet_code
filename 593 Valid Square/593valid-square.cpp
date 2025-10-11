class Solution {
public:
    int dist(vector<int>a,vector<int>b){
        int n=(abs(a[0]-b[0]))*(abs(a[0]-b[0]));
        int m=(abs(a[1]-b[1]))*(abs(a[1]-b[1]));
        int d=(n+m);
        return d;

    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
         vector<int> d = {
            dist(p1,p2), dist(p1,p3), dist(p1,p4),
            dist(p2,p3), dist(p2,p4),
            dist(p3,p4)
        };
       
        
        sort(d.begin(), d.end());
        map<int,int>m;
        for(auto& i:d){
            if(i==0) return false;
            m[i]++;
        }
        d.clear();
        for(auto& [n,c]:m){
           d.push_back(c);
        }
       
        if(d.size()!=2) {
           
            return false;
        }
       if((d[0]==2&&d[1]==4)||(d[0]==4&&d[1]==2)) return true;
       else {
        
        return false;
       }
    }
};