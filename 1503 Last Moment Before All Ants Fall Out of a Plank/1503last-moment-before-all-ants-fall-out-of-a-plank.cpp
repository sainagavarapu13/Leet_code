class Solution {
public:
    int getLastMoment(int n, vector<int>& a, vector<int>& b) {
        int m1=0,m2=0;
        int sec=0;
        if(!a.empty())
        m1=*max_element(a.begin(),a.end());
       if(!b.empty()){
        m2=*min_element(b.begin(),b.end());
        sec=n-m2;}
        else sec=0;
       return max(m1,sec);
    }
};