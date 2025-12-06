class Solution {
public:
    int countStudents(vector<int>& a, vector<int>& b) {
      
        int n=a.size(),cnt=0,f=0;
        for(int i=0;i<n;i++){
            f=0;
            for(int j=0;j<n;j++){
                if(b[i]==a[j]){
                    cnt++;
                    f=1;
                   // cout<<"b "<<i<<" "<<"A "<<j<<"\n";
                    a[j]=-1;
                    break;
                }
            }
            if(f==0) break;
        }
       // cout<<cnt;
        return n-cnt;
    }
};