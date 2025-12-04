class Solution {
public:
    vector<int> addToArrayForm(vector<int>& a, int k) {
       int i=a.size()-1;
       int c=0;
        vector<int>b;
       while(c>0 || k >0 || i >=0){
        int  x= (i>=0)?a[i]:0;
        int y = k%10;
        b.push_back((x+y+c)%10) ;
            c = (x+y+c)/10;
            i--;
            k/=10;
       }
       reverse( b.begin(),b.end());
    return b;
    }
};