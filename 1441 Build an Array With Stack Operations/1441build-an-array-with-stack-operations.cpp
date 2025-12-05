class Solution {
public:
    vector<string> buildArray(vector<int>& a, int n) {
        vector<string>s;
        int k=0;
        for( int i=1;i<=n && k<a.size();){
             if( a[k]==i){
                 s.push_back("Push");
                 k++;
                 i++;
            }
          else{  while( a[k]>i){
                if( a[k]!=i){
                s.push_back("Push");
                s.push_back("Pop");
                i++;}
            }
           }
        }
        
        return s;
    }
};