class Solution {
public:
    bool isMonotonic(vector<int>& a) {
        int cnt=0;
        vector<int>n;
        for( int i : a){
            if(n.empty() || n.back()!=i) n.push_back(i);
        }
        for( int i =1;i<n.size();i++){
            if(n[i-1]<n[i] ) cnt++;
        }
        int x=n.size();
        printf("%d %d",cnt,x-cnt);
        if( x- cnt == 1 || x- cnt ==x )return 1;
        else return 0;
        
    }
};