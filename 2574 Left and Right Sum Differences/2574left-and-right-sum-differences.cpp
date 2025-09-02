class Solution {
public:
    vector<int> leftRightDifference(vector<int>& n) {
        vector<int>a,b,res;
        a.push_back(0);
        int sum=0;
        for( int i: n) sum+=i;
         b.push_back(sum-a.back()-n[0]);
        for(int i=1;i<n.size();i++ ){
             cout << a.back() <<" ";
           b.push_back(b.back()-n[i]);
          
            a.push_back(a.back()+n[i-1]);
            
        }
        for( int i=0;i<a.size();i++){
            res.push_back(abs(a[i]-b[i]));
        }
        return res;
    }
};