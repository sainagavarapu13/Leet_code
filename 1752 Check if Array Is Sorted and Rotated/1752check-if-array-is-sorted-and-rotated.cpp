class Solution {
public:
    bool check(vector<int>& a) {
        int cnt=0,i,j;
        for(i=0;i<a.size()-1;i++){
           
                if(a[i]>a[j=i+1]) cnt++;
            
        }
        if(cnt==0) return 1;
        else if(cnt>1) return 0;
        else{
            if(a[0]>=a.back()) return 1;
            else return 0;
        }
        return 1;
    }
};